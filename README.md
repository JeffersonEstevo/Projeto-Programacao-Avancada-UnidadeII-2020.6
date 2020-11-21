## Projeto-Programacao-Avancada-UnidadeII-2020.6
Projeto referente à disciplina Programação Avançada (DCA-1202) 2020.6
### Integrantes:

**_Jefferson Estevo Feitosa - Matrícula: 20160108225_**

**_Felipe Augusto Gabriel dos Santos - Matrícula: 20160108646_**
<hr>

<h4>Projeto Esculor Digital 3D</h4>
  <p>Trata-se de um projeto para criação de uma escultura 3D, a partir da plotagem de Voxels (3D), que são estruturas semelhantes aos pixels (2D).
    Onde o professor nos passou a Classe Sculptor e a definição de seus métodos: (Sculptor, ~Sculptor, setColor, putVoxel, cutVoxel, putBox, cutBox, putSphere, cutSphere,
    putEllipsoid, cutEllipsoid e writeOFF ).</p>
  
  Nossa tarefa foi implementar os seguintes métodos:<br>
  Sculptor: É o construtor da classe, nela nós fizemos a alocação dinâmica da matriz tridimensional para guardar a escultura.<br><br>
  ~Sculptor: É o destrutor da classe, essencial para liberar a memória guardada para alocação.<br><br>
  setColor: Define a cor atual para utilizar no desenho, possui as propriedades (r, g, b, a), onde r = tons de vermelho, g = tons de verde, 
  b = tons de azul e a = canal alpha (transparência) do desenho.<br><br>
  putVoxel: Habilita o voxel em questão para visualização.<br><br>
  cutVoxel: Desabilita o voxel em questão para visualização.<br><br>
  putBox: Habilita uma caixa, onde podemos passar suas dimensões para visualização.<br><br>
  cutBox: Desabilita uma caixa, onde podemos passar suas dimensões para retirar da visualização.<br><br>
  putEsphere: Habilita uma esfera, onde podemos passar suas dimensões para visualização.<br><br>
  cutEsphere: Desabilita uma esfera, onde podemos passar suas dimensões para retirar da visualização.<br><br>
  putEllipsoid: Habilita uma elipsóide, onde podemos passar suas dimensões para visualização.<br><br>
  cutEllipsoid: Desabilita uma elipsóide, onde podemos passar suas dimensões para retirar da visualização.<br><br>
  writeOFF: Escrita da escultura no formato  de leitura de imagens tridimensionais, em um arquivo com extensão OFF, que pode ser lido com alguns softwares de 
  visualização, como Geomview e Meshlab.
 
