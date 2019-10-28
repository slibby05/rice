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

Talbe* new_table()
{
    Table* sym_tab = (Table*)malloc(sizeof(Table));
    sym_tab->size = 0;
    sym_tab->capacity = INIT_SYMBOLS;
    sym_tab->symbols = (Symbol*)malloc(sizeof(Symbol)*INIT_SYMBOLS);
    return sym_tab;
}

void add_symbol(Table* symtab, const char* name, int arity, int* constant)
{
    if(symtab->size == symtab->capacity)
    {
        Symbol* new_symbols = (Symbol*)malloc(2*s->capacity*sizeof(Symbol));
        memcpy(new_symbols, symtab->symbols, symtab->capacity*sizeof(Symbol));
        symtab->capacity *= 2;
        symtab->symbols = new_symbols;
    }
    constant = symtab->size;
    symtab->size++;
    symtab->symbols[s->size].name = name;
    symtab->symbols[s->size].arity = arity;
}

#endif // SYMTAB_H
