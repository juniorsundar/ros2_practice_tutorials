// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_srvcli:srv/AddTwoInts.idl
// generated code does not contain a copyright notice
#include "cpp_srvcli/srv/detail/add_two_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cpp_srvcli__srv__AddTwoInts_Request__init(cpp_srvcli__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
cpp_srvcli__srv__AddTwoInts_Request__fini(cpp_srvcli__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

cpp_srvcli__srv__AddTwoInts_Request *
cpp_srvcli__srv__AddTwoInts_Request__create()
{
  cpp_srvcli__srv__AddTwoInts_Request * msg = (cpp_srvcli__srv__AddTwoInts_Request *)malloc(sizeof(cpp_srvcli__srv__AddTwoInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_srvcli__srv__AddTwoInts_Request));
  bool success = cpp_srvcli__srv__AddTwoInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cpp_srvcli__srv__AddTwoInts_Request__destroy(cpp_srvcli__srv__AddTwoInts_Request * msg)
{
  if (msg) {
    cpp_srvcli__srv__AddTwoInts_Request__fini(msg);
  }
  free(msg);
}


bool
cpp_srvcli__srv__AddTwoInts_Request__Sequence__init(cpp_srvcli__srv__AddTwoInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cpp_srvcli__srv__AddTwoInts_Request * data = NULL;
  if (size) {
    data = (cpp_srvcli__srv__AddTwoInts_Request *)calloc(size, sizeof(cpp_srvcli__srv__AddTwoInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_srvcli__srv__AddTwoInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_srvcli__srv__AddTwoInts_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cpp_srvcli__srv__AddTwoInts_Request__Sequence__fini(cpp_srvcli__srv__AddTwoInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cpp_srvcli__srv__AddTwoInts_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cpp_srvcli__srv__AddTwoInts_Request__Sequence *
cpp_srvcli__srv__AddTwoInts_Request__Sequence__create(size_t size)
{
  cpp_srvcli__srv__AddTwoInts_Request__Sequence * array = (cpp_srvcli__srv__AddTwoInts_Request__Sequence *)malloc(sizeof(cpp_srvcli__srv__AddTwoInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cpp_srvcli__srv__AddTwoInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cpp_srvcli__srv__AddTwoInts_Request__Sequence__destroy(cpp_srvcli__srv__AddTwoInts_Request__Sequence * array)
{
  if (array) {
    cpp_srvcli__srv__AddTwoInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cpp_srvcli__srv__AddTwoInts_Response__init(cpp_srvcli__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
cpp_srvcli__srv__AddTwoInts_Response__fini(cpp_srvcli__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

cpp_srvcli__srv__AddTwoInts_Response *
cpp_srvcli__srv__AddTwoInts_Response__create()
{
  cpp_srvcli__srv__AddTwoInts_Response * msg = (cpp_srvcli__srv__AddTwoInts_Response *)malloc(sizeof(cpp_srvcli__srv__AddTwoInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_srvcli__srv__AddTwoInts_Response));
  bool success = cpp_srvcli__srv__AddTwoInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cpp_srvcli__srv__AddTwoInts_Response__destroy(cpp_srvcli__srv__AddTwoInts_Response * msg)
{
  if (msg) {
    cpp_srvcli__srv__AddTwoInts_Response__fini(msg);
  }
  free(msg);
}


bool
cpp_srvcli__srv__AddTwoInts_Response__Sequence__init(cpp_srvcli__srv__AddTwoInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cpp_srvcli__srv__AddTwoInts_Response * data = NULL;
  if (size) {
    data = (cpp_srvcli__srv__AddTwoInts_Response *)calloc(size, sizeof(cpp_srvcli__srv__AddTwoInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_srvcli__srv__AddTwoInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_srvcli__srv__AddTwoInts_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cpp_srvcli__srv__AddTwoInts_Response__Sequence__fini(cpp_srvcli__srv__AddTwoInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cpp_srvcli__srv__AddTwoInts_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cpp_srvcli__srv__AddTwoInts_Response__Sequence *
cpp_srvcli__srv__AddTwoInts_Response__Sequence__create(size_t size)
{
  cpp_srvcli__srv__AddTwoInts_Response__Sequence * array = (cpp_srvcli__srv__AddTwoInts_Response__Sequence *)malloc(sizeof(cpp_srvcli__srv__AddTwoInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cpp_srvcli__srv__AddTwoInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cpp_srvcli__srv__AddTwoInts_Response__Sequence__destroy(cpp_srvcli__srv__AddTwoInts_Response__Sequence * array)
{
  if (array) {
    cpp_srvcli__srv__AddTwoInts_Response__Sequence__fini(array);
  }
  free(array);
}
