#ifndef MATRIX_H
#define MATRIX_H

#define CREATE_MAT4 {           \
    1.0f, 0.0f, 0.0f, 0.0f,     \
    0.0f, 1.0f, 0.0f, 0.0f,     \
    0.0f, 0.0f, 1.0f, 0.0f,     \
    0.0f, 0.0f, 0.0f, 1.0f      \
}

void mat_projection (float* matrix);

#endif  // MATRIX_H