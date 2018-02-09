#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H


class UnsortedType
{
    public:
        UnsortedType();
        void MakeEmpty();
        bool IsFull();
        int GetLength() const;
        void InsertItem(int item);
        void DeleteItem(int item);
        void Show();

    protected:

    private:
        int length;
        int info[10];
};

#endif // UNSORTEDTYPE_H
