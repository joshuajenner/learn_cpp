#pragma once

class Log {
public:
    const int LogLevelError;
    const int LogLevelWarning;
    const int LogLevelInfo;
private:
    int m_LogLevel;

public:
    void SetLevel(int level);
    void Error(const char* message);
    void Warn(const char* message);
    void Info(const char* message);
};