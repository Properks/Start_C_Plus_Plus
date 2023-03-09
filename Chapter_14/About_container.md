####About C++ STL
`<vector>`

    Declare : vector <type> name
    Input : `.push_back(data)`
    Strength : Better memory than *type + new
    Worth : Edit

`<list>`

    Declare : list <type> name
    Input : .push_back()
    Edit : .insert(iterator, data), .erase(iterator)
    Strength : Better edit than vector

`<map>`

    Declare : map <type, type> name
    Input : .insert(pair <type,type>(key,value)), 
            name[key] = value
    iterator : iterator -> first : key
               iterator -> second : value
    -> map can have only one unique key
    
`<stack>`

    Declare : stack <type> name
    Input : .push(data)
    Delete : .pop(data)
    Select data : .top() (but only one that is inputed at last)
    Check : .empty()

`<queue>`

    Declare : stack <type> name
    Input : .push(data)
    Delete : .pop(data)
    Select data : .top() (but only one that is inputed at first)

`priority_queue`

    Declare : priority_queue <type> name
    priority_queue <type> name : descend
    priority_queue <type, vector<type>, greater<type> > name : ascend
    Set descending or ascending order regarless of order of entering

Add

    library.find(data) : Find a data in list(list, vector ...etc). If could't find data, return library.end()
    library.begin() : return library's first iterator value
    library.end() : return library's last iterator value
    library.size() : return size of library
    library.empty() : Check that library is empty.