#pragma once
class counter {
private:
    int count;
public:
    counter();
    counter(int res);

    void SetCount(int yesCount);

    int plus();

    int minus();

    void GetCount();

};
