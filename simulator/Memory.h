#ifndef MEMORY_H
#define MEMORY_H
#include <cstdio>


class Memory
{
    public:
        Memory();
        Memory(FILE *image,unsigned int startFrom);
        Memory(int memorySize, int pageSize);
        unsigned char* getMemoryPointer(int offset);
        void writeData(unsigned int physicalAddress, unsigned char* data, int length);
        void setMemorySize(int size);
        int getMemorySize();
        void updateLastRefCycle(unsigned int physicalAddress, int cycle);
        unsigned int getVictimPageHeadPhysicalAddress();
        void swapPages(unsigned char* virtualPageHeadPointer, unsigned int targetPageHeadPhysicalAddress);
        virtual ~Memory();


        unsigned char memory[1024];
        int* lastRefCycle;
        bool* isOccypied;
        unsigned int memorySize;
        unsigned int pageSize;
        unsigned int numberOfPages;
        unsigned int words;
    protected:
    private:
        void setMemoryToZero();
};

#endif // MEMORY_H
