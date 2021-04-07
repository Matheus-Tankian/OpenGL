#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <stdio.h>

void display(void) {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Define a cor de fundo da cena (cor usada para limpar o buffer de cor)
	glClear(GL_COLOR_BUFFER_BIT);//Inicializa o buffer de cores antes de ele ser alterado

	glMatrixMode(GL_MODELVIEW); //Informa que as operações seguintes serão executadas na matrix modelview
	glLoadIdentity(); //Carrega a matriz identidade

	glPointSize(25); //Define quantos pixels representarão um vértice na tela
	glLineWidth(2);
	
	
	//tringulo teto
	glBegin(GL_TRIANGLES);
  //p1
        glColor3ub(0, 0, 0);
        glVertex2f(0, 0);
        //p2
        glColor3ub(0, 0, 0);
        glVertex2f(-0.3, -0.3);
        //p3
        glColor3ub(0, 0, 0);
        glVertex2f(0.3, -0.3);

    glEnd();

	//quadrado frente
    glBegin(GL_QUADS);
        //p1
        glColor3ub(255, 0, 0);
        glVertex2f(-0.3, -0.3);
        //p2
        glColor3ub(255, 0, 0);
        glVertex2f(0.3, -0.3);
        //p4
        glColor3ub(255, 0, 0);
        glVertex2f(0.3, -0.8);
        //p3
        glColor3ub(255, 0, 0);
        glVertex2f(-0.3, -0.8);

    glEnd();
    
    
    //porta
    
    glBegin(GL_QUADS);
        //p1
        glColor3ub(8, 0, 0);
        glVertex2f(-0.18, -0.5);
        //p2
        glColor3ub(8, 0, 0);
        glVertex2f(0.18, -0.5);
        //p4
        glColor3ub(8, 0, 0);
        glVertex2f(0.18, -0.8);
        //p3
        glColor3ub(8, 0, 0);
        glVertex2f(-0.18, -0.8);

    glEnd();
    
    //trinco
    
     glBegin(GL_LINES);
     
        //p1
        
        glColor3ub(128, 159, 255);
        glVertex2f(-0.15, -0.65);
        
         glColor3ub(128, 159, 255);
        glVertex2f(-0.13, -0.65);
        
         glColor3ub(128, 159, 255);
        glVertex2f(-0.15, -0.655);
        
         glColor3ub(128, 159, 255);
        glVertex2f(-0.13, -0.655);
        
     glEnd();
     
    
    //teto
      glBegin(GL_QUADS);
        //p1
        glColor3ub(0, 255, 0);
        glVertex2f(0, 0);
        //p2
        glColor3ub(8, 255, 0);
       	glVertex2f(0.3, -0.3);
        //p4
        glColor3ub(8, 255, 0);
        glVertex2f(1, -0.3);
        //p3
        glColor3ub(8, 255, 0);
        glVertex2f(0.8, 0);

    glEnd();
    
    //corpo
   glBegin(GL_QUADS);
        //p1
        glColor3ub(255, 0, 255);
        glVertex2f(0.3, -0.3);
        //p2
        glColor3ub(255, 0, 255);
        glVertex2f(1, -0.3);
        //p4
        glColor3ub(255, 0, 255);
        glVertex2f(1, -0.8);
        //p3
        glColor3ub(255, 0, 255);
        glVertex2f(0.3, -0.8);

    glEnd();
    
    //janela 1
      glBegin(GL_QUADS);
        //p1
        glColor3ub(0, 0, 255);
        glVertex2f(0.4, -0.4);
        //p2
        glColor3ub(0, 0, 255);
        glVertex2f(0.6, -0.4);
        //p4
        glColor3ub(0, 0, 255);
        glVertex2f(0.6, -0.6);
        //p3
        glColor3ub(0, 0, 255);
        glVertex2f(0.4, -0.6);

    glEnd();
    
    //linhas janelas 1
    
        glBegin(GL_LINES);
     
        //p1
        
        glColor3ub(128, 159, 255);
        glVertex2f(0.5, -0.4);
     
         glColor3ub(128, 159, 255);
        glVertex2f(0.5, -0.6);
        
        
        glColor3ub(128, 159, 255);
        glVertex2f(0.4, -0.5);
     
         glColor3ub(128, 159, 255);
        glVertex2f(0.6, -0.5);
        
     
        
     glEnd();
    
    
    
    
    //janela 2
      glBegin(GL_QUADS);
        //p1
        glColor3ub(0, 0, 255);
        glVertex2f(0.7, -0.4);
        //p2
        glColor3ub(0, 0, 255);
        glVertex2f(0.9, -0.4);
        //p4
        glColor3ub(0, 0, 255);
        glVertex2f(0.9, -0.6);
        //p3
        glColor3ub(0, 0, 255);
        glVertex2f(0.7, -0.6);

    glEnd();
    
     //linhas janelas 2
    
        glBegin(GL_LINES);
     
        //p1
        
        glColor3ub(128, 159, 255);
        glVertex2f(0.8, -0.4);
     
         glColor3ub(128, 159, 255);
        glVertex2f(0.8, -0.6);
        
        
        glColor3ub(128, 159, 255);
        glVertex2f(0.7, -0.5);
     
         glColor3ub(128, 159, 255);
        glVertex2f(0.9, -0.5);
        
     
        
     glEnd();
     
     //caminho 
     
      glBegin(GL_QUADS);
        //p1
        glColor3ub(0, 0, 255);
       glVertex2f(0.18, -0.8);
        //p2
        glColor3ub(0, 0, 255);
        glVertex2f(0.10, -1);
        //p4
        glColor3ub(0, 0, 255);
        glVertex2f(-0.60, -1);
        //p3
        glColor3ub(0, 0, 255);
         glVertex2f(-0.18, -0.8);

    glEnd();
    
    
    
    
    

	glFlush(); //Informa que as operações devem ser processadas imediatamente e exibidas na tela
}


/*Recebe um o comprimento (width) e altura (height) da janela em pixels.*/
void resize(GLsizei w, GLsizei h) {
	if (h == 0)
		h = 1;

	printf("Tam. janela: (%i,%i)\n",w,h);
}

/*Recebe um código para cada tecla (ASCII) e as coordenadas do mouse.*/
void keyboard(unsigned char key, int x, int y) {

	switch (key) {
	case 27:
		exit(0);
		break;
	case 32:
		glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Define a cor de fundo da cena (cor usada para limpar o buffer de cor)
		break;
	default:
		printf("Código tecla: %i. Mouse em (%i,%i)\n",key,x,y);
		break;
	}
	glutPostRedisplay(); //Informa que a janela atual deve ser redesenhada
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv); //Inicializa a OpenGL
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //Configura os modos de exibição (mais detalhes no futuro)
	glutInitWindowSize(500, 500); //Define o tamanho da janela em pixels
	glutInitWindowPosition(0, 0); //Define a posição inicial da janela
	glutCreateWindow("Primeiro Exemplo"); //Cria a janela especificando seu título
	glutDisplayFunc(display); //Especifica a função de rendering (exibe a cena no loop)
	glutReshapeFunc(resize); //Especifica função a ser executada quando a janela é redimensionada
	glutKeyboardFunc(keyboard); //Especifica função a ser executada quando uma tecla é pressionada

	glutMainLoop(); //Executa o loop de renderização
	return 0;
}
