#include "encodeprocess.h"

encodeProcess::encodeProcess(QObject *parent) : QObject(parent)
{

}

bool encodeProcess::setCmd(const QString &cmd)
{
    mCmd = cmd;
    return true;
}

void encodeProcess::runFFmpeg()
{
    QString appPath("/usr/share/harbour-encode/");
    QString appName("ffmpeg_static");
    // -y: always overwrite, never ask. -hide_banner: keep stderr to the
    // actual error message — the error overlay shows this output verbatim.
    ffmpegProc.start(appPath+appName + " -y -hide_banner " + mCmd);
    connect(&ffmpegProc, SIGNAL(finished(int)), this, SLOT(getffmpegOutput(int)));
}

void encodeProcess::getffmpegOutput(int exitCode)
{
    if (exitCode == 0) {
        Q_EMIT success();
    }
    else {
        QByteArray errorOut = ffmpegProc.readAllStandardError();
        mErrorOutput = errorOut.simplified();
        Q_EMIT error();
    }
}

