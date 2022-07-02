#define _CRT_SECURE_NO_WARNINGS 1

template<class T> inline size_t GetCount(T* array) {
    return sizeof(array) / sizeof(T);
}