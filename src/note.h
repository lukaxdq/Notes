#ifndef NOTE_H
#define NOTE_H

#include <string>

class Note {
public:
    Note();
    Note(const std::wstring& content);
    std::wstring getContent() const;
    void setContent(const std::wstring& content);

private:
    std::wstring content;
};

#endif // NOTE_H