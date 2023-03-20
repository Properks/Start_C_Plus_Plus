#Summary data Type(?)

###int Variable()
{
    >int Number1

    >Number1 = Variable
    >&Number1 = Address 
}

###int Pointer()
{
    >int *Pt_number

    >Pt_number = Address
    >*Pt_number = Variable
}

###char Pt_Array()
{
    >char *Pt_char = "Pointer"

    >Pt_char = String // "Pointer"
    >*Pt_char = Character // 'P'
}

###char Array()
{
    >char Str_array[] = "Array"

    >Str_array = Address // "Array"
    >*Str_array = Character // 'A'
    >Str_array[0] = Character // 'A'

char *Pt_char2 = Str_array

    >*Pt_char2 = Character // 'A'
    >Pt_char2 = Address // "Array"
    >Pt_char2[0] = Character // 'A'
}