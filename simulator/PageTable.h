#ifndef PAGETABLE_H
#define PAGETABLE_H


class PageTable
{
    public:
        PageTable(int pageSize);
        unsigned int getPhysicalAddress(unsigned int virtualAddress, int cycle);
      //  unsigned int swapPages(unsigned int virtualAddress);
        bool getIsInMemory(unsigned int virtualAddress);
        virtual ~PageTable();

        bool* isInMemory;
        //bool* dirty;
        //unsigned int* lastRefCycle;
        unsigned int* physicalPageNumber;
        int pageSize;
        int numOfEntries;

    protected:
    private:
};

#endif // PAGETABLE_H
