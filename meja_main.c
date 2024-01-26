#include <GL/glut.h>

void drawTable() {
    // Gambar alas meja
    glColor3f(0.5, 0.35, 0.05);  // Warna coklat
    glPushMatrix();
        glTranslatef(0.0, -1.0, 0.0);
        glScalef(2.0, 0.1, 1.0);
        glutSolidCube(1.0);
    glPopMatrix();

    // Gambar kaki meja 1
    glColor3f(0.5, 0.35, 0.05);  // Warna coklat
    glPushMatrix();
        glTranslatef(-0.9, -1.5, 0.4);
        glScalef(0.1, 0.8, 0.1);
        glutSolidCube(1.0);
    glPopMatrix();

    // Gambar kaki meja 2
    glColor3f(0.5, 0.35, 0.05);  // Warna coklat
    glPushMatrix();
        glTranslatef(0.9, -1.5, 0.4);
        glScalef(0.1, 0.8, 0.1);
        glutSolidCube(1.0);
    glPopMatrix();

    // Gambar kaki meja 3
    glColor3f(0.5, 0.35, 0.05);  // Warna coklat
    glPushMatrix();
        glTranslatef(-0.9, -1.5, -0.4);
        glScalef(0.1, 0.8, 0.1);
        glutSolidCube(1.0);
    glPopMatrix();

    // Gambar kaki meja 4
    glColor3f(0.5, 0.35, 0.05);  // Warna coklat
    glPushMatrix();
        glTranslatef(0.9, -1.5, -0.4);
        glScalef(0.1, 0.8, 0.1);
        glutSolidCube(1.0);
    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    gluLookAt(2.0, 2.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    drawTable();

    glutSwapBuffers();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Warna background: putih
    glEnable(GL_DEPTH_TEST);
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float)width / (float)height, 0.1, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Meja 3D menggunakan OpenGL");
    glutInitWindowSize(800, 600);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();

    return 0;
}

