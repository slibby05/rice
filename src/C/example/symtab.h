#ifndef SYMTAB_H
#define SYMTAB_H

#define INIT_SYMBOLS 10

typedef struct Symbol
{
    const char* name;
    int arity;
} Symbol;

typedef struct Table
{
    int size;
    int capacity;
    Symbol* symbols;
} Table;

Table* new_table()
{
    Table* sym_tab = (Table*)malloc(sizeof(Table));
    sym_tab->size = 0;
    sym_tab->capacity = INIT_SYMBOLS;
    sym_tab->symbols = (Symbol*)malloc(sizeof(Symbol)*INIT_SYMBOLS);
    return sym_tab;
}

void add_symbol(Table* symtab, const char* name, int arity, unsigned char* constant)
{
    if(symtab->size == symtab->capacity)
    {
        Symbol* new_symbols = (Symbol*)malloc(2*symtab->capacity*sizeof(Symbol));
        memcpy(new_symbols, symtab->symbols, symtab->capacity*sizeof(Symbol));
        symtab->capacity *= 2;
        free(symtab->symbols);
        symtab->symbols = new_symbols;
    }
    *constant = symtab->size;
    symtab->symbols[symtab->size].name = name;
    symtab->symbols[symtab->size].arity = arity;
    symtab->size++;
}

#endif // SYMTAB_H
