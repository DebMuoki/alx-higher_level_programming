#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p)
{
    long int size, alloc;
    PyListObject *list;

    printf("[*] Python list info\n");
    if (!PyList_Check(p))
    {
        printf("  [ERROR] Invalid List Object\n");
        return;
    }

    list = (PyListObject *)p;
    size = Py_SIZE(p);
    alloc = list->allocated;

    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", alloc);
}

void print_python_bytes(PyObject *p)
{
    char *str;
    Py_ssize_t size;
    PyBytesObject *bytes;

    printf("[.] bytes object info\n");
    if (!PyBytes_Check(p))
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    bytes = (PyBytesObject *)p;
    str = bytes->ob_sval;
    size = Py_SIZE(p);

    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", str);
}

void print_python_float(PyObject *p)
{
    double value;
    PyFloatObject *f;

    printf("[.] float object info\n");
    if (!PyFloat_Check(p))
    {
        printf("  [ERROR] Invalid Float Object\n");
        return;
    }

    f = (PyFloatObject *)p;
    value = f->ob_fval;

    printf("  value: %f\n", value);
}

