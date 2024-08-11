#include <GL/glut.h>

// Fungsi untuk menggambar layangan
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // Set warna garis menjadi putih
    glColor3f(1.0f, 1.0f, 1.0f);

    // Menggambar garis layangan menggunakan GL_LINES
    glBegin(GL_LINES);
        // Bagian atas layangan
        glVertex2f(0.0f, 0.7f);  // Titik atas pucuk
        glVertex2f(-0.3f, 0.4f); // Titik kiri atas
        
        glVertex2f(0.0f, 0.7f);  // Titik atas pucuk
        glVertex2f(0.3f, 0.4f);  // Titik kanan atas

        // Bagian bawah layangan
        glVertex2f(-0.3f, 0.4f); // Titik kiri atas
        glVertex2f(-0.2f, 0.0f); // Titik kiri bawah

        glVertex2f(0.3f, 0.4f);  // Titik kanan atas
        glVertex2f(0.2f, 0.0f);  // Titik kanan bawah

        glVertex2f(-0.2f, 0.0f); // Titik kiri bawah
        glVertex2f(0.0f, -0.8f); // Titik bawah

        glVertex2f(0.2f, 0.0f);  // Titik kanan bawah
        glVertex2f(0.0f, -0.8f); // Titik bawah

        // Menghubungkan sisi-sisi untuk membentuk layangan
        glVertex2f(-0.3f, 0.4f); // Titik kiri atas
        glVertex2f(0.3f,0.4f);  // Titik kanan atas


    glEnd();


    glutSwapBuffers();
}

// Fungsi untuk mengatur proyeksi dan viewport
void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Warna latar belakang hitam
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Proyeksi ortogonal
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Layangan dengan GL_POINTS dan GL_LINES");

    init();
    
    glutDisplayFunc(display);
    
    glutMainLoop();
    return 0;
}
