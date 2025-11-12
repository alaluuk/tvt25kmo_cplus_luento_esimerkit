#ifndef KANTALUOKKA_H
#define KANTALUOKKA_H

class Kantaluokka
{
private:
    int privateNumber;
protected:
    int protectedNumber;
public:
    int publicNumber;
    Kantaluokka();
    void setPrivateNumber(int newPrivateNumber);
    int getPrivateNumber() const;
};

#endif // KANTALUOKKA_H
