#pragma once

class Singleton 
{
private:
    static Singleton instance;

public:
    static Singleton& getInstance();
};