#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int login = 0, senha = 0, idade = 0, modalidade = 0, nacionalidade = 0, filme = 0;

    printf("Informe seu login:\n");
    scanf("%d",&login);

    printf("Informe sua senha:\n");
    scanf("%d",&senha);

    printf("Informe sua idade:\n");
    scanf("%d",&idade);

    printf("Escolha a modalidade:\n 1 - Acao e aventura;\n 2 - Drama;\n 3 - Comedia;\n 4 - Romance;\n 5 - Ficcao Cientifica;\n 6 - Terror.\n");
    scanf("%d",&modalidade);

    printf("Escolha a entre producao nacional ou estrangeira:\n 1 - Nacional ou 2- Estrangeiro\n");
    scanf("%d",&nacionalidade);

    switch(modalidade)
    {
        //A??o e aventura
        case 1:
            //Nacional Adulto
            if (nacionalidade == 1 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Tropa de Elite 1\n");
                printf("2 - Tropa de Elite 2: O Inimigo Agora e Outro\n");
                printf("3 - Alemao\n");
                printf("4 - Motorrad\n");
                printf("5 - O Doutrinador\n");
                printf("6 - 2 Coelhos\n");
                scanf("%d",&filme);
                switch (filme)
                {
                    //Tropa de Elite 1
                    case 1:
                        printf("Sinopse: Um capitao de policia do Rio de Janeiro esta esgotado e preste a se aposentar, mas precisa encontrar um sucessor para liderar uma perigosa missao\n");
                        printf("Principais Atores: Wagner Moura, Milhem Cortaz, Caio Junqueira, Andre Ramiro\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Jose Padilha\n");
                        printf("Duracao: 1h 55min\n");
                        printf("Pais e Ano: Brasil, 2007\n");
                        break;
                    //Tropa de Elite 2
                    case 2:
                        printf("Sinopse: Depois de uma operacao fracassada, Nascimento e afastado do BOPE e agora trabalha como subsecretario de Inteligencia na Secretaria de Seguran?a Publica do Rio de Janeiro. No novo cargo, o ex-capitao e arrastado para uma disputa politica sangrenta que envolve funcionarios do governo e grupos paramilitares.\n");
                        printf("Principais Atores: Wagner Moura, Milhem Cortaz, Maria Ribeiro, Andre Ramiro\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Jose Padilha\n");
                        printf("Duracao: 1h 55min\n");
                        printf("Pais e Ano: Brasil, 2010\n");
                        break;
                    //Alemao
                    case 3:
                        printf("Sinopse: Cinco policiais infiltrados no Complexo Alemao precisam encontrar uma forma de escapar quando sao desmascarados e impiedosamente perseguidos pelos traficantes\n");
                        printf("Principais Atores: Caio Blat, Gabriel Braga Nunes, Marcelo Melo Junior\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Jose Eduardo Belmonte\n");
                        printf("Duracao: 1h 49min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                    //Motorrad
                    case 4:
                        printf("Sinopse: Motoqueiros em busca de aventura acabam fazendo uma trilha em um local proibido e cercado por belezas naturais. Mas a atmosfera de tranquilidade e transformada em medo e morte.\n");
                        printf("Principais Atores: Carla Salle, Guilherme Prates, Juliana Lohmamm, Pablo Sanabio\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Vicente Amorim\n");
                        printf("Duracao: 1h 32min\n");
                        printf("Pais e Ano: Brasil, 2017\n");
                        break;
                    //O Doutrinador
                    case 5:
                        printf("Sinopse: Um vigilante mascarado surge para atacar a impunidade que permite que politicos e donos de empreiteiras enrique?am as custas da miseria e do trabalho da populacao brasileira. A historia do homem por tras do disfarce de Doutrinador envolve uma jornada pessoal de vinganca na qual um agente traumatizado decide fazer justica com as proprias maos.\n");
                        printf("Principais Atores: Kiko Pissolato, Taina Medina, Samuel de Assis, Eduardo Moscovis\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretores: Gustavo Bonafe e Fabio Mendonca\n");
                        printf("Duracao: 1h 44min\n");
                        printf("Pais e Ano: Brasil, 2018\n");
                        break;
                    //2 Coelhos
                    case 6:
                        printf("Sinopse: Preso entre a criminalidade e o poder p?blico corrupto, Edgar est? cansado dessa vida e planeja fazer justi?a com as pr?prias m?os. Ele executa um plano que coloca criminosos e corruptos em rota de colis?o.\n");
                        printf("Principais Atores: Julia Paes, Alessandra Negrini, Fernando Alves Pinto\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretores: Afonso Poyart\n");
                        printf("Duracao: 1h 48min\n");
                        printf("Pais e Ano: Brasil, 2012\n");
                        break;
                }
            }
            //Nacional Crian?a
            else if (nacionalidade == 1 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - O Fio da Meada\n");
                printf("2 - Profissao MC\n");
                printf("3 - Veronica\n");
                printf("4 - Bacurau\n");
                printf("5 - Disparos\n");
                printf("6 - Seguranca Nacional\n");
                scanf("%d",&filme);
                switch (filme)
                {
                    //O Fio da Meada
                    case 1:
                        printf("Sinopse: Catharina Lima e seu marido resolvem mudar de moradia, procurando uma casa mais proxima a empresa onde o marido trabalha. Quando o filho do casal e sequestrado na porta da escola, a vida de todos na casa e mergulhada em um terrivel pesadelo.\n");
                        printf("Principais Atores:  Alexandre Barillari, Priscila Almeida, Alana Souza\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretores: Anderson Santos Borges, Flaviano Oliveira, Luciano Santiago dos Santos\n");
                        printf("Duracao: 1h 28min\n");
                        printf("Pais e Ano: Brasil, 2019\n");
                        break;
                    //Profissao MC
                    case 2:
                        printf("Sinopse: Profissao MC traz a historia de um rapper na periferia que num momento delicado de sua vida, desempregado e com a namorada gravida, recebe duas propostas: uma para entrar no trafico de drogas e outra para seguir apostando no rap. E um filme sobre oportunidades, ou falta delas.\n");
                        printf("Principais Atores: Criolo Doido, Da Antiga, Dan-Dan\n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretores: Alessandro Buzo, Toni Nogueiro\n");
                        printf("Duracao: 51min\n");
                        printf("Pais e Ano: Brasil, 2009\n");
                        break;
                    //Veronica
                    case 3:
                        printf("Sinopse: Veronica e uma professora da rede municipal do Rio de janeiro. Em seu trabalho ela precisa enfrentar assaltos, trafico de drogas, roubo de equipamento escolar e homicidios\n");
                        printf("Principais Atores: Andrea Beltrao, Julio Adriao, Camila Amado\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Mauricio Farias\n");
                        printf("Duracao: 1h 30min\n");
                        printf("Pais e Ano: Brasil, 2009\n");
                        break;
                    //Bacurau
                    case 4:
                        printf("Sinopse: Pouco apos a morte de dona Carmelita, aos 94 anos, os moradores de um pequeno povoado localizado no sertao brasileiro, chamado Bacurau, descobrem que a comunidade nao consta mais em qualquer mapa. Aos poucos, percebem algo estranho na regiao: enquanto drones passeiam pelos ceus, estrangeiros chegam a cidade pela primeira vez. Quando carros se tornam vitimas de tiros e cadaveres come?am a aparecer, os habitantes chegam a conclusao de que estao sendo atacados.\n");
                        printf("Principais Atores:  Sonia Braga, Udo Kier, Barbara Colen\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretores: Kleber Mendonca Filho, Juliano Dornelles\n");
                        printf("Duracao: 2h 10min\n");
                        printf("Pais e Ano: Brasil, 2019\n");
                        break;
                    //Disparos
                    case 5:
                        printf("Sinopse: O fotografo Henrique e assaltado por motoqueiros, que em seguida sao atropelados por um carro nao identificado. Apos recuperar sua c?mera, ele percebe que precisa voltar ao local para encontrar seu cartao de memoria. Questionado por um policial, acaba sendo acusado por omissao de socorro e, consequentemente, e levado a uma delegacia. La precisa lidar com Freire e Gomes, que nao estao dispostos a conversar.\n");
                        printf("Principais Atores: Gustavo Machado, Caco Ciocler, Julio Adriao\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Juliana Reis\n");
                        printf("Duracao: 1h 22min\n");
                        printf("Pais e Ano: Brasil, 2012\n");
                        break;
                    //Seguranca Nacional
                    case 6:
                        printf("Sinopse: A Forca Aerea Brasileira passa a ter autorizacao para perseguir, e, se for preciso, abater aeronaves que entrem no espaco aereo brasileiro sem autorizacao\n");
                        printf("Principais Atores: Ailton Graca, Angela Vieira, Gracindo Junior\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Roberto Carminati\n");
                        printf("Duracao: 1h 37min\n");
                        printf("Pais e Ano: Brasil, 2010\n");
                        break;
                }
            }
            //Estrangeiro Adulto
            else if (nacionalidade == 2 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Logan\n");
                printf("2 - Rambo: Ate o Fim\n");
                printf("3 - Sem Remorso\n");
                printf("4 - O Protetor\n");
                printf("5 - O Protetor 2\n");
                printf("6 - Kingsman: Servico Secreto\n");
                scanf("%d",&filme);
                switch(filme)
                {
                    //Logan
                    case 1:
                        printf("Sinopse: Em 2024, os mutantes estao em franco declinio, e as pessoas nao sabem o real motivo. Uma organizacao esta transformando as criancas mutantes em verdadeiras assassinas. Wolverine, cansado de tudo e a pedido de um cada vez mais enfraquecido Professor Xavier, precisa proteger a jovem e poderosa Laura Kinney, conhecida como X-23. Enquanto isso, o vilao Nathaniel Essex amplia seu projeto de destruicao.\n");
                        printf("Principais Atores: Hugh Jackman, Patrick Stewart, Richard E. Grant, Boyd Holbrook\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: James Mangold\n");
                        printf("Duracao: 2h 21min\n");
                        printf("Pais e Ano: Canada-Australia-EUA, 2017\n");
                        break;
                    //Rambo
                    case 2:
                        printf("Sinopse: O tempo passou para Rambo, que agora vive recluso em um rancho. Sua vida marcada por lutas violentas ficou para tras, mas deixou marcas inesqueciveis. No entanto, quando uma jovem de uma familia amiga e sequestrada, Rambo precisa confrontar seu passado e resgatar suas habilidades de combate para enfrentar o mais perigoso cartel mexicano. A busca logo se transforma em uma cacada por justica, na qual nenhum criminoso e perdoado.\n");
                        printf("Principais Atores: Sylvester Stallone, Paz Vega, Yvette Monreal, Sergio Peris-Mencheta\n");
                        printf("Faixa etaria: 18 Anos\n");
                        printf("Diretor: Adrian Grunberg\n");
                        printf("Duracao: 1h 39min\n");
                        printf("Pais e Ano: EUA, 2019\n");
                        break;
                    //Sem Remorso
                    case 3:
                        printf("Sinopse: Um fuzileiro naval de elite descobre uma conspiracao internacional enquanto busca justi?a pelo assassinato de sua esposa gravida.\n");
                        printf("Principais Atores: Michael B. Jordan, Jamie Bell, Jodie Turner-Smith\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Stefano Sollima\n");
                        printf("Duracao: 1h 49min\n");
                        printf("Pais e Ano: Alemanha, 2021\n");
                        break;
                    //O Protetor
                    case 4:
                        printf("Sinopse: O ex-agente secreto Robert McCall acredita que seu passado ficou para tras e tenta viver uma nova vida. Ele conhece Alina, uma jovem que esta sob poder de uma quadrilha russa, e simplesmente nao consegue ignora-la. Munido de suas extraordinarias habilidades, ele ressurge como um verdadeiro anjo vingador. Fora da aposentadoria e com um novo desejo de fazer justica, McCall decide ajudar quem foi brutalizado e oprimido.\n");
                        printf("Principais Atores: Denzel Washington, Melissa Leo, Bill Pullman\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Antoine Fuqua\n");
                        printf("Duracao: 2h 12min\n");
                        printf("Pais e Ano: EUA, 2014\n");
                        break;
                    //O Protetor 2
                    case 5:
                        printf("Sinopse: Criminosos assassinam Susan Plummer, a melhor amiga de Robert McCall e sua ex-colega de trabalho. Obcecado, Robert pensa apenas em eliminar o bando de assassinos profissionais que destruiu sua vida.\n");
                        printf("Principais Atores: Denzel Washington, Pedro Pascal, Melissa Leo, Ashton Sanders\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Antoine Fuqua\n");
                        printf("Duracao: 2h\n");
                        printf("Pais e Ano: EUA, 2018\n");
                        break;
                    //Kingsman
                    case 6:
                        printf("Sinopse: Eggsy e um jovem com problemas de disciplina que parece perto de se tornar um criminoso. Determinado dia, ele entra em contato com Harry, que lhe apresenta a agencia de espionagem Kingsman. O jovem se une a um time de recrutas em busca de uma vaga na agencia. Ao mesmo tempo, Harry tenta impedir a ascensao do vilao Valentine\n");
                        printf("Principais Atores: Taron Egerton, Colin Firth, Hanna Alstrom\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Matthew Vaughn\n");
                        printf("Duracao: 2h 10min\n");
                        printf("Pais e Ano: EUA, 2014\n");
                        break;
                }
            }
            //Estrangeiro Crian?a
            else if (nacionalidade == 2 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Vingadores: Ultimato\n");
                printf("2 - Bumblebee\n");
                printf("3 - Capita Marvel\n");
                printf("4 - Homem Aranha de Volta ao Lar\n");
                printf("5 - Homem Aranha no Aranhaverso\n");
                printf("6 - Shazam\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //Vingadores Ultimato
                case 1:
                    printf("Sinopse: Apos Thanos eliminar metade das criaturas vivas, os Vingadores tem de lidar com a perda de amigos e entes queridos. Com Tony Stark vagando perdido no espa?o sem agua e comida, Steve Rogers e Natasha Romanov lideram a resistencia contra o tita louco.\n");
                    printf("Principais Atores: Scarllet Johansson, Crhis Evans, Robert Downey Jr., Chris Hemsworth\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretores: Joe Russo, Anthony Russo\n");
                    printf("Duracao: 3h 2min\n");
                    printf("Pais e Ano: EUA, 2019\n");
                    break;
                //Bumblebee
                case 2:
                    printf("Sinopse: Refugiado em um ferro-velho na California, Bumblebee, machucado e sem condicao de uso, e encontrado e consertado pela jovem Charlie. Quando Bee ganha vida, porem, a moca percebe que seu novo amigo e bem mais do que um simples automovel.\n");
                    printf("Principais Atores: Dylan O'Brien, Hailee Steinfield, John Cena, Jorge Lendeborg Jr\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretor: Travis Knight\n");
                    printf("Duracao: 1h 54min\n");
                    printf("Pais e Ano: EUA, 2018\n");
                    break;
                //Capita Marvel
                case 3:
                    printf("Sinopse:  Capita Marvel, parte do exercito de elite dos Kree, uma ra?a alienigena, encontra-se no meio de uma batalha entre seu povo e os Skrulls. Ao tentar impedir uma invasao de larga escala na Terra, em 1995, ela tem memorias recorrentes de uma outra vida, como Carol Danvers, agente da For?a Aerea norte-americana. Com a ajuda de Nick Fury, Capita Marvel precisa descobrir os segredos de seu passado e por um fim ao conflito intergalatico com os Skrulls.\n");
                    printf("Principais Atores: Brie Larson, Samuel L. Jackson, Jude Law\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretores: Anna Boden, Ryan Fleck\n");
                    printf("Duracao: 2h 5min\n");
                    printf("Pais e Ano: EUA, 2019\n");
                    break;
                //Homem aranha de volta ao lar
                case 4:
                    printf("Sinopse: Depois de lutar ao lado dos Vingadores, chegou a hora do jovem Peter Parker voltar para casa em Nova York ao lado de sua tia May. Sob o olhar atento do mentor Tony Stark, Peter comeca a abracar sua nova identidade como Homem-Aranha e combate diariamente pequenos crimes nas redondezas. Ele acredita que encontrou a missao de sua vida quando o terrivel vilao Abutre surge ameacando a cidade. O problema e que a tarefa nao sera tao facil como ele imaginava.\n");
                    printf("Principais Atores: Tom Holland, Zendaya, Marisa Tomei, Michael Keaton\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretor: Jon Watts\n");
                    printf("Duracao: 2h 13min\n");
                    printf("Pais e Ano: EUA, 2017\n");
                    break;
                //Homem Aranha no Aranhaverso
                case 5:
                    printf("Sinopse: Apos ser atingido por uma teia radioativa, Miles Morales, um jovem negro do Brooklyn, se torna o Homem-Aranha, inspirado no legado do ja falecido Peter Parker. Entretanto, ao visitar o tumulo de seu idolo em uma noite chuvosa, ele e surpreendido com a presenca do proprio Peter, vestindo o traje do heroi por baixo de um sobretudo. A surpresa fica ainda maior quando Miles descobre que ele veio de uma dimensao paralela, assim como outras versoes do Homem-Aranha.\n");
                    printf("Principais Atores: Hailee Steinfeld, Shameik Moore, Jake Johnson\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretores: Peter Ramsey, Rodney Rothman, Bob Persichetti\n");
                    printf("Duracao: 1h 56min\n");
                    printf("Pais e Ano: EUA, 2018\n");
                    break;
                //Shazam
                case 6:
                    printf("Sinopse: Billy Batson tem apenas 14 anos de idade, mas recebeu de um antigo mago o dom de se transformar em um super-heroi adulto chamado Shazam. Ao gritar a palavra SHAZAM!, o adolescente se transforma nessa sua poderosa versao adulta para se divertir e testar suas habilidades. Contudo, ele precisa aprender a controlar seus poderes para enfrentar o malvado Dr. Thaddeus Sivana.\n");
                    printf("Principais Atores: Zachary Levi, Asher Angel, Jack Dylan Grazer, Mark Strong\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretor: David F. Sandberg\n");
                    printf("Duracao: 2h 12min\n");
                    printf("Pais e Ano: EUA, 2019\n");
                    break;
                }
            }
            break;
        //Drama
        case 2:
            //Nacional Adulto
            if (nacionalidade == 1 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Boi Neon\n");
                printf("2 - A Estrada 47\n");
                printf("3 - Febre Do Rato\n");
                printf("4 - Jonas\n");
                printf("5 - Sem Seu Sangue\n");
                printf("6 - Permanencia\n");
                scanf("%d",&filme);
                switch (filme)
                {
                    //Boi Neon
                    case 1:
                        printf("Sinopse: Iremar eh um vaqueiro de curral que viaja pelo Nordeste trabalhando em vaquejadas. Seu maior sonho eh largar tudo e comecar uma nova carreira na moda como estilista no Polo de Confeccoes do Agreste.\n");
                        printf("Principais Atores: Juliano Cazarre, Maeve Jinkings, Alyne Santana\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Gabriel Mascaro\n");
                        printf("Duracao: 1h 41min\n");
                        printf("Pais e Ano: Brasil, 2015\n");
                        break;
                    //A Estrada 47
                    case 2:
                        printf("Sinopse: Durante a Segunda Guerra Mundial, as tropas brasileiras de deteccao de minas que serviam no norte da Italia buscam coragem para dar seguranca a infame estrada 47.\n");
                        printf("Principais Atores: Daniel de Oliveira, Francisco Gaspar, Julio Andrade\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Vicente Ferraz\n");
                        printf("Duracao: 1h 49min\n");
                        printf("Pais e Ano: Brasil, 2013\n");
                        break;
                    //Febre Do Rato
                    case 3:
                        printf("Sinopse: Zizo eh um poeta inconformado e anarquista, que preenche seus dias com seus poemas subversivos ate conhecer a bela Eneida, que injeta uma historia de amor em sua vida mundana.\n");
                        printf("Principais Atores: Irandhir Santos, Nanda Costa, Matheus Nachtergaele\n");
                        printf("Faixa etaria: 18 anos\n");
                        printf("Diretor: Claudio Assis\n");
                        printf("Duracao: 1h 50min\n");
                        printf("Pais e Ano: Brasil, 2011\n");
                        break;
                    //Jonas
                    case 4:
                        printf("Sinopse: No Carnaval, um rapaz sequestra a filha da patroa da sua mae, por quem sempre foi apaixonado, e a mantem refem dentro de um carro alegorico.\n");
                        printf("Principais Atores: Jesuita Barbosa, Laura Neiva, Criolo\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Lo Politi\n");
                        printf("Duracao: 1h 36min\n");
                        printf("Pais e Ano: Brasil, 2015\n");
                        break;
                    //Sem Seu Sangue
                    case 5:
                        printf("Sinopse: A vida para a introspectiva Silvia parece fazer mais sentido apos conhecer Artur, skatista e poeta nas horas vagas. Os dois mergulham em uma convivencia intensa, interrompida por um grave acidente.\n");
                        printf("Principais Atores: Luiza Kosovski, Juan Paiva, Digao Ribeiro\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Alice Furtado\n");
                        printf("Duracao: 1h 40min\n");
                        printf("Pais e Ano: Brasil, 2019\n");
                        break;
                    //Permanencia
                    case 6:
                        printf("Sinopse: Fotografo pernambucano viaja a Sao Paulo para sua primeira exposicao individual e decide se hospedar na casa da ex-namorada, hoje casada.\n");
                        printf("Principais Atores: Irandhir Santos, Rita Carelli, S?lvio Restiffe\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Leonardo Lacca\n");
                        printf("Duracao: 1h 25min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                }
            }
            //Nacional Crian?a
            else if (nacionalidade == 1 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Casa Grande\n");
                printf("2 - O Tempo E O Vento\n");
                printf("3 - Na Quebrada\n");
                printf("4 - Como Nossos Pais\n");
                printf("5 - Cinema Aspirinas E Urubus\n");
                printf("6 - O Filho Eterno\n");
                scanf("%d",&filme);
                switch (filme)
                {
                    //Casa Grande
                    case 1:
                        printf("Sinopse: Sonia e Hugo sao da alta burguesia carioca e levam uma vida bastante confortavel. Aos poucos v?o a falencia, mas ninguem sabe de seus problemas financeiros, nem mesmo o filho Jean, que faz de tudo para se desvencilhar dos pais superprotetores. Para se manter, o casal corta despesas e ele, que so se preocupava com garotas e vestibular, enfrenta pela primeira vez a realidade.\n");
                        printf("Principais Atores:  Thales Cavalcanti, Marcello Novaes, Suzana Pires\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Fellipe Barbosa\n");
                        printf("Duracao: 1h 54min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                    //O Tempo E O Vento
                    case 2:
                        printf("Sinopse: A familia Terra Cambara e sua principal opositora, a familia Amaral, viveram em conflito durante 150 anos, come?ando nas Missoes ate o final do seculo XIX. A luta entre essas duas familias atravessa a formacao do Rio Grande do Sul, a povoacao do territorio brasileiro e a demarcacao de suas fronteiras, forjada a ferro e espada pelas lutas entre as coroas portuguesa e espanhola. Um dia, o sobrado dos Terra-Cambara eh cercado pelos Amaral, e eles sao obrigados a se defenderem.\n");
                        printf("Principais Atores: Thiago Lacerda, Marjorie Estiano, Fernanda Montenegro\n");
                        printf("Faixa etaria: 14\n");
                        printf("Diretores: Jayme Monjardim\n");
                        printf("Duracao: 2h 07min\n");
                        printf("Pais e Ano: Brasil, 2013\n");
                        break;
                    //Na Quebrada
                    case 3:
                        printf("Sinopse: Um grupo de jovens de classe baixa encontra no cinema uma forma de expressar suas ideias e emocoes. No grupo estao Junior, um garoto talentoso no conserto de televisoes, Joana, que sonha em conhecer sua mae, Zeca, que foi testemunha de uma chacina, e Gerson, cujo pai esta na prisao desde que ele nasceu.\n");
                        printf("Principais Atores: Jean Luis Amorim, Claudio Jaborandy, Emanuelle Araujo\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Fernando Grostein Andrade\n");
                        printf("Duracao: 1h 28min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                    //Como Nossos Pais
                    case 4:
                        printf("Sinopse: Rosa eh uma mulher que almeja a perfeicao como profissional, mae, filha, esposa e amante. Filha de intelectuais e mae de duas meninas pre-adolescentes, ela se ve pressionada pelas duas geracoes que exigem que ela seja engajada, moderna e onipresente.\n");
                        printf("Principais Atores: Maria Ribeiro, Clarisse Abujamra, Paulo Vilhena\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Lais Bodanzky\n");
                        printf("Duracao: 1h 45min\n");
                        printf("Pais e Ano: Brasil, 2017\n");
                        break;
                    //Cinema Aspirinas E Urubus
                    case 5:
                        printf("Sinopse: Para se distanciar da Segunda Guerra Mundial, um jovem alemao se muda para o Brasil e conhece um mochileiro que tambem tem seus motivos para viver na estrada\n");
                        printf("Principais Atores: Peter Ketnath, Joao Miguel, Oswaldo Mil\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Marcelo Gomes\n");
                        printf("Duracao: 1h 40min\n");
                        printf("Pais e Ano: Brasil, 2005\n");
                        break;
                    //O Filho Eterno
                    case 6:
                        printf("Sinopse: O casal Roberto e Claudia aguardam a chegada de seu primeiro bebe. A noticia de que seu filho seria portador de Sindrome de Down faz Roberto, que eh escritor, ter dificuldades com a paternidade.\n");
                        printf("Principais Atores: Marcos Veras, Debora Falabella, Uyara Torrente\n");
                        printf("Faixa etaria: 12 Anos\n");
                        printf("Diretor: Paulo Machline\n");
                        printf("Duracao: 1h 26min\n");
                        printf("Pais e Ano: Brasil, 2016\n");
                        break;
                }
            }
            //Estrangeiro Adulto
            else if (nacionalidade == 2 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - O Fotografo De Mauthausen\n");
                printf("2 - Peles\n");
                printf("3 - Por Uma Vida Melhor\n");
                printf("4 - Mignonnes\n");
                printf("5 - Mom\n");
                printf("6 - Loev\n");
                scanf("%d",&filme);
                switch(filme)
                {
                    //O Fotografo De Mauthausen
                    case 1:
                        printf("Sinopse: Prisioneiro em campo de concentracao nazista rouba negativos de fotos das atrocidades cometidas.\n");
                        printf("Principais Atores: Mario Casas, Richard van Weyden, Alain Hernandez\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Mar Targarona\n");
                        printf("Duracao: 1h 50min\n");
                        printf("Pais e Ano: Espanha, 2018\n");
                        break;
                    //Peles
                    case 2:
                        printf("Sinopse: Neste drama social sombrio, personagens deformados e desfigurados precisam encontrar maneiras de esconder suas diferencas e lidar com o resto da sociedade.\n");
                        printf("Principais Atores: Ana Polvorosa, Candela Pena, Carmen Machi\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Eduardo Casanova\n");
                        printf("Duracao: 1h 17min\n");
                        printf("Pais e Ano: Espanha, 2017\n");
                        break;
                    //Por Uma Vida Melhor
                    case 3:
                        printf("Sinopse: Uma Jornalista se passa por prostituta para expor o trafico de pessoas e se depara com um mundo de mulheres exploradas e violencia brutal.\n");
                        printf("Principais Atores: Sharon Ooja, Omoni Oboli, Blossom Chukwujekwu\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Kenneth Gyang\n");
                        printf("Duracao: 1h 46min\n");
                        printf("Pais e Ano: Africa, 2020\n");
                        break;
                    //Mignonnes
                    case 4:
                        printf("Sinopse: Aos 11 anos, Amy comeca a se rebelar contra as tradicoes conservadoras da familia e encontra seu lugar em um grupo de danca da escola.\n");
                        printf("Principais Atores: Fathia Youssouf, Medina El Aidii-Azouni, Ester Gohourou\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Maimouna Doucoure\n");
                        printf("Duracao: 1h 36min\n");
                        printf("Pais e Ano: Franca, 2020\n");
                        break;
                    //Mom
                    case 5:
                        printf("Sinopse: A enteada dela sofreu abuso sexual numa festa. Os quatro criminosos n?o contavam com a furia desta mae, que faz de tudo para destruir suas vidas.\n");
                        printf("Principais Atores: Sridevi, Akshaye Khanna, Sajal Ali\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Ravi Udyawar\n");
                        printf("Duracao: 2h 18min\n");
                        printf("Pais e Ano: India, 2017\n");
                        break;
                    //Loev
                    case 6:
                        printf("Sinopse: Vidas mudam de rumo quando uma viagem leva um genio de wall street a explorar seus reais sentimentos por um velho amigo desiludido com o namorado.\n");
                        printf("Principais Atores: Shiv Pandit, Dhruv Ganesh, Siddharth Mennon\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Sudhanshu Saria\n");
                        printf("Duracao: 1h 29min\n");
                        printf("Pais e Ano: India, 2015\n");
                        break;
                }
            }
            //Estrangeiro Crian?a
            else if (nacionalidade == 2 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Milagre Na Cela 7\n");
                printf("2 - Agnus Dei\n");
                printf("3 - A Menina E O Leao\n");
                printf("4 - Rosa E O Momo\n");
                printf("5 - Me Chame Pelo Seu Nome\n");
                printf("6 - Como Estrelas Na Terra\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //Milagre Na Cela 7
                case 1:
                    printf("Sinopse: Memo, um pastor de ovelhas com deficiencia mental, vive com sua filha e avo em uma vila na costa turca do mar Egeu. Um dia, sua vida eh virada de cabeca para baixo quando a filha do comandante morre e Memo eh acusado do assassinato e condenado a morte.\n");
                    printf("Principais Atores: Aras Bulut Iynemli, Nisa Sofiya Aksongur, Deniz Baysal\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Mehmet Ada Oztekin\n");
                    printf("Duracao: 2h 12min\n");
                    printf("Pais e Ano: Turquia, 2019\n");
                    break;
                //Agnus Dei
                case 2:
                    printf("Sinopse: Em 1945, na Polonia, Mathilde, uma jovem medica francesa, descobre que freiras moradoras de um convento foram estupradas por soldados e muitas delas engravidaram. Mathilde, escalada somente para cuidar dos franceses, secretamente, comeca a ajudar as freiras. A medica ainda precisa enfrentar os julgamentos das religiosas que se sentem culpadas por terem violado o voto de castidade.\n");
                    printf("Principais Atores: Agata Kulesza, Agata Buzek, Lou De Laage\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Anne Fontaine\n");
                    printf("Duracao: 1h 55min\n");
                    printf("Pais e Ano: Franca, 2016\n");
                    break;
                //A Menina E O Leao
                case 3:
                    printf("Sinopse:  Mia eh uma jovem de 14 anos que sempre teve uma profunda amizade com Charlie, um leao branco da fazenda de sua familia. Um dia, seu pai decide vender o felino para cacadores de trofeus e ela n?o ve outra opcao alem de fugir com Charlie para salva-lo.\n");
                    printf("Principais Atores: Daniah De Villiers, Melanie Laurent, Langley Kirkwood\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretor: Gilles de Maistre\n");
                    printf("Duracao: 1h 38min\n");
                    printf("Pais e Ano: Fran?a, 2019\n");
                    break;
                //Rosa E O Momo
                case 4:
                    printf("Sinopse: Uma sobrevivente do Holocausto cria um vinculo com um jovem do Senegal que tentou rouba-la.\n");
                    printf("Principais Atores: Sophia Loren, Ibrahima Gueye, Renato Carpentieri\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Edoardo Ponti\n");
                    printf("Duracao: 1h 35min\n");
                    printf("Pais e Ano: Italia, 2020\n");
                    break;
                //Me Chame Pelo Seu Nome
                case 5:
                    printf("Sinopse: O jovem Elio esta enfrentando outro verao preguicoso na casa de seus pais na bela e languida paisagem italiana. Mas tudo muda com a chegada de Oliver, um academico que veio ajudar a pesquisa de seu pai.\n");
                    printf("Principais Atores: Armie Hammer, Timothee Chalamet, Michael Stuhlbarg\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Luca Guadagnino\n");
                    printf("Duracao: 2h 12min\n");
                    printf("Pais e Ano: Italia, 2017\n");
                    break;
                //Como Estrelas Na Terra
                case 6:
                    printf("Sinopse: Relata a historia de uma crianca chamada Ishaan, de 9 anos de idade, que mora com sua familia na India. Na escola onde estuda o ensino eh tradicional tendo com uma professora autoritaria e arrogante perante as dificuldades de Ishaan.\n");
                    printf("Principais Atores:  Aamir Khan, Darsheel Safary, Tisca Chopra\n");
                    printf("Faixa etaria: 10 Anos\n");
                    printf("Diretores: Aamir Khan, Amole Gupte\n");
                    printf("Duracao: 2h 42min\n");
                    printf("Pais e Ano: India, 2007\n");
                    break;
                }
            }
            break;
        //Com?dia
        case 3:
            //Nacional Adulto
            if (nacionalidade == 1 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - O Cheiro Do Ralo\n");
                printf("2 - Separacoes\n");
                printf("3 - O Homem Que Desafiou O Diabo\n");
                printf("4 - Bingo: Os Reis Da Manha\n");
                printf("5 - Estomago\n");
                printf("6 - Cabras Da Peste\n");
                scanf("%d",&filme);
                switch (filme)
                {
                    //O Cheiro Do Ralo
                    case 1:
                        printf("Sinopse: Louren?o eh proprietario de uma loja de penhores e se sustenta desenvolvendo um jogo perverso com seus clientes, geralmente em dificuldades financeiras. Tudo muda quando ele conhece uma gar?onete e comeca a perder o controle de sua vida.\n");
                        printf("Principais Atores: Selton Mello, Paula Braun, Alice Braga\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Heitor Dhalia\n");
                        printf("Duracao: 1h 52min\n");
                        printf("Pais e Ano: Brasil, 2006\n");
                        break;
                    //Separa??es
                    case 2:
                        printf("Sinopse: Cabral, um conceituado diretor e autor de teatro, esta envolvido com Glorinha, uma atriz mais jovem do que ele. Cada um toma um rumo diferente e novos relacionamentos vao aparecendo. Ao mesmo tempo, Cabral descobre que ama verdadeiramente a esposa. Agora, a briga eh para reconquista-la, pois ela ja esta envolvida com outro.\n");
                        printf("Principais Atores: Domingos Oliveira, Fabio Junqueira, Priscilla Rozenbaum, Ricardo Kosovski, Suzana Saldanha\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Domingos Oliveira\n");
                        printf("Duracao: 1h 56min\n");
                        printf("Pais e Ano: Brasil, 2002\n");
                        break;
                    //O Homem Que Desafiou o Diabo
                    case 3:
                        printf("Sinopse: Za Araujo eh um viajante recem-chegado em Jardim dos Caiacos. Ele seduz a filha de um comerciante e eh obrigado a se casar com ela. Araujo torna-se um escravo do sogro e da mulher. Percebendo que vira motivo de piada na cidade, ele resolve mudar de vida e comecar uma nova.\n");
                        printf("Principais Atores: Marcos Palmeira, Fernanda Paes Leme\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Moacyr Goes\n");
                        printf("Duracao: 1h 46min\n");
                        printf("Pais e Ano: Brasil, 2007\n");
                        break;
                    //Bingo: O Rei Das manhas
                    case 4:
                        printf("Sinopse: Augusto sempre sonhou com o estrelato e finalmente tem sua chance ao se tornar Bingo, um palhaco apresentador de um programa infantil. Mas a clausula no contrato nao permite que a identidade do palhaco seja revelada, deixando Augusto com frustracao de ser o homem anonimo mais famoso do Brasil.\n");
                        printf("Principais Atores: Vladimir Brichta, Leandra Leal, Augusto Madeira\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Daniel Rezende\n");
                        printf("Duracao: 1h 53min\n");
                        printf("Pais e Ano: Brasil, 2017\n");
                        break;
                    //Estomago
                    case 5:
                        printf("Sinopse: Raimundo Nonato mudou-se para a cidade grande na esperanca de ter uma vida melhor. Trabalhando como faxineiro em um bar, ele descobre que seu talento eh mesmo na cozinha. Raimundo transforma o bar em um sucesso e acaba sendo contratado para trabalhar em um restaurante italiano da regiao como assistente de cozinheiro. A cozinha italiana eh uma grande descoberta para Raimundo, que agora tem uma casa, roupas melhores, relacionamentos sociais e um amor, a prostituta Iria\n");
                        printf("Principais Atores: Joao Miguel, Babu Santana, Fabiula Nascimento\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Marcos Jorge\n");
                        printf("Duracao: 1h 53min\n");
                        printf("Pais e Ano: Brasil, 2007\n");
                        break;
                    //Cabras Da Peste
                    case 6:
                        printf("Sinopse: Bruceuilis, um policial do interior do Ceara, viaja ate Sao Paulo para resgatar Celestina, uma cabra considerada patrimonio de sua cidade. Na capital paulista, ele encontra Trindade, um escrivao da policia que decide sair do marasmo de seu trabalho e ajuda-lo na aventura, mesmo nao sendo sua especialidade.\n");
                        printf("Principais Atores: Edmilson Filho, Matheus Nachtergaele, Falcao\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Vitor Brandt\n");
                        printf("Duracao: 1h 37min\n");
                        printf("Pais e Ano: Brasil, 2021\n");
                        break;
                }
            }
            //Nacional Crian?a
            else if (nacionalidade == 1 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Cro: O Filme\n");
                printf("2 - Lascados\n");
                printf("3 - Meu Passado Me Condena\n");
                printf("4 - Um Namorado Para Minha Mulher\n");
                printf("5 - O Amor No Diva\n");
                printf("6 -  O Palha?o\n");
                scanf("%d",&filme);
                switch (filme)
                {
                    //Cro: O Filme
                    case 1:
                        printf("Sinopse: Apos herdar a fortuna de Tereza Cristina, Cro esta cansado da vida de milionario. Decidido a encontrar uma nova musa a quem possa dedicar sua vida, ele inicia uma busca pessoal que faz com que entreviste diversas peruas. Seu objetivo eh encontrar aquela que seja melhor qualificada para que ele proprio possa servir como mordomo, assim como fez com sua antiga patroa. Entretanto, apos muito avaliar, acaba percebendo que sua musa ideal eh justamente aquela que jamais havia imaginado.\n");
                        printf("Principais Atores: Marcelo Serrado, Alexandre Nero, Milhem Cortaz\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Bruno Barreto\n");
                        printf("Duracao: 1h 50min\n");
                        printf("Pais e Ano: Brasil, 2013\n");
                        break;
                    //Lascados
                    case 2:
                        printf("Sinopse: Em 1994, tres jovens amigos saem da Zona Oeste de Sao Paulo rumo ao carnaval baiano. Eles pegam um carro velho e, durante a viagem, conhecem a bela Cenilde, que coloca a amizade deles a prova. Juntos, eles vivem inusitadas e divertidas aventuras.\n");
                        printf("Principais Atores: Chay Suede, Jose Trassi, Paulo Vilela\n");
                        printf("Faixa etaria: 12\n");
                        printf("Diretor: Vitor Mafra\n");
                        printf("Duracao: 1h 29min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                    //Meu Passado Me Condena
                    case 3:
                        printf("Sinopse: Fabio e Mia fazem um cruzeiro do Rio de Janeiro ate a Europa de lua de mel, onde ela reencontra seu ex-namorado Beto, que esta casado com Laura, antiga paixao de Fabio. Atrapalhados com essa coincidencia, o casal vive situacoes comicas e embaracosas.\n");
                        printf("Principais Atores: Andrea Beltrao, Julio Adriao, Camila Amado\n");
                        printf("Faixa etaria: 12 Anos\n");
                        printf("Diretor: Julia Rezende\n");
                        printf("Duracao: 1h 42min\n");
                        printf("Pais e Ano: Brasil, 2013\n");
                        break;
                    //Um Namorado Para Minha Mulher
                    case 4:
                        printf("Sinopse: Cansado das reclamacoes da mulher, Chico decide terminar o seu casamento. Mas ele nao tem coragem, pois Nena, a esposa, eh muito brava. Por medo de encara-la, ele tem a brilhante ideia de contratar um amante profissional para conquista-la.\n");
                        printf("Principais Atores: Ingrid Guimaraes, Caco Ciocler, Domingos Montagner\n");
                        printf("Faixa etaria: 12 Anos\n");
                        printf("Diretor: Julia Rezende\n");
                        printf("Duracao: 1h 40min\n");
                        printf("Pais e Ano: Brasil, 2016\n");
                        break;
                    //O Amor No Diva
                    case 5:
                        printf("Sinopse: Uma terapeuta de casais esta prestes a completar 30 anos de casada. A aposentadoria de seu marido e a chegada de um jovem casal para consulta, fazem com que ela comece a questionar sua vida e seu proprio casamento.\n");
                        printf("Principais Atores: Zeze Polessa, Daniel Dantas, Fernanda Paes Leme\n");
                        printf("Faixa etaria: 12 Anos\n");
                        printf("Diretor: lexandre Reinecke\n");
                        printf("Duracao: 1h 28min\n");
                        printf("Pais e Ano: Brasil, 2016\n");
                        break;
                    //O Palhaco
                    case 6:
                        printf("Sinopse: Benjamim e seu pai, Valdemar, formam a divertida dupla de palhacos Pangare e Puro Sangue. Os dois trabalham em um circo mambembe, mas Benjamin decide abandonar a vida artistica e mergulhar em uma nova aventura para realizar um grande sonho.\n");
                        printf("Principais Atores: Selton Mello, Paulo Jose, Tonico Pereira\n");
                        printf("Faixa etaria: 10 Anos\n");
                        printf("Diretor: Selton Mello\n");
                        printf("Duracao: 1h 30min\n");
                        printf("Pais e Ano: Brasil, 2011\n");
                        break;
                }
            }
                //Estrangeiro Adulto
            else if (nacionalidade == 2 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Borat: Fita de Cinema Seguinte\n");
                printf("2 - Ibiza: Tudo Pelo Dj\n");
                printf("3 - O Virgem De 40 Anos\n");
                printf("4 - Sementes Podres\n");
                printf("5 - Milf\n");
                printf("6 - Ted\n");
                scanf("%d",&filme);
                switch(filme)
                {
                    //Borat: Fita de Cinema Seguinte
                    case 1:
                        printf("Sinopse: Libertado da prisao pelo governo do Cazaquistao, o comediante Borat arrisca a sua vida ao retornar aos Estados Unidos com sua filha de 15 anos. Desta vez, ele revela mais sobre a cultura norte-americana e fala sobre eleicoes e pandemia por Covid-19.\n");
                        printf("Principais Atores: Sacha Baron Cohen, Maria Bakalova, Tom Hanks\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Jason Woliner\n");
                        printf("Duracao: 1h 36min\n");
                        printf("Pais e Ano: EUA, 2020\n");
                        break;
                    //Ibiza: Tudo Pelo Dj
                    case 2:
                        printf("Sinopse: Sua historia segue Harper, uma mulher de 30 anos de Nova York que viaja para Barcelona em uma viagem de negocios, o que leva a um encontro glamouroso com um DJ famoso.\n");
                        printf("Principais Atores: Gillian Jacobs, Vanessa Bayer, Phoebe Robinson\n");
                        printf("Faixa etaria: 18 Anos\n");
                        printf("Diretor: Alex Richanbach\n");
                        printf("Duracao: 1h 34min\n");
                        printf("Pais e Ano: EUA, 2018\n");
                        break;
                    //O Virgem De 40 Anos
                    case 3:
                        printf("Sinopse: Andy fica horrorizado quando seus colegas de trabalho descobrem que, aos 40 anos, ele ainda eh virgem. Agora, seus amigos tentam ajuda-lo a encontrar uma garota e perder a sua virgindade.\n");
                        printf("Principais Atores: Steve Carell, Catherine Keener, Paul Rudd\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Judd Apatow\n");
                        printf("Duracao: 2h 13min\n");
                        printf("Pais e Ano: EUA, 2005\n");
                        break;
                    //Sementes Podres
                    case 4:
                        printf("Sinopse: Wael vive nos arredores de Paris dando pequenos golpes com Monique, uma mulher aposentada. Sua vida se transforma no dia em que um amigo, Victor, oferece a ele, por insistencia de Monique, um pequeno trabalho voluntario no centro de criancas excluidas do sistema escolar. Wael se encontra gradualmente responsavel por um grupo de seis adolescentes expulsos por insolencia ou porte de armas. Deste encontro explosivo entre ervas daninhas nascera um verdadeiro milagre.\n");
                        printf("Principais Atores: Kheiron, Catherine Deneuve\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Kheiron\n");
                        printf("Duracao: 1h 45min\n");
                        printf("Pais e Ano: Franca, 2018\n");
                        break;
                    //Milf
                    case 5:
                        printf("Sinopse: Tres amigas na casa dos 40 encaram dores do coracao e se aventuram com homens mais novos durante as ferias no sul da franca.\n");
                        printf("Principais Atores: Marie-Josee Croze, Virginie Ledoyen, Axelle Laffont\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Axelle Laffont\n");
                        printf("Duracao: 1h 41min\n");
                        printf("Pais e Ano: Fran?a, 2018\n");
                        break;
                    //Ted
                    case 6:
                        printf("Sinopse: Quando crianca, John desejou que seu ursinho Ted ganhasse vida e, surpreendentemente, foi atendido. Porem, agora que eh adulto, ele precisa lidar com as consequencias de seu pedido, ja que Ted n?o vai parar de atormentar a sua vida.\n");
                        printf("Principais Atores: Mark Wahlberg, Mila Kunis, Joel McHale\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Seth MacFarlane\n");
                        printf("Duracao: 1h 46min\n");
                        printf("Pais e Ano: EUA, 2012\n");
                        break;
                }
            }
            //Estrangeiro Crian?a
            else if (nacionalidade == 2 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Meninas Malvadas\n");
                printf("2 - Matilda\n");
                printf("3 - Misterio No Mediterraneo\n");
                printf("4 - Isi e Ossi\n");
                printf("5 - Desnorteados\n");
                printf("6 - Nada a Esconder\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //Meninas Malvadas
                case 1:
                    printf("Sinopse: A adolescente Cady Heron foi educada na Africa pelos seus pais cientistas. Quando sua familia se muda para o suburbio, nos Estados Unidos, Cady come?a a frequentar a escola publica e recebe uma rapida introdu??o as leis de popularidade que dividem seus colegas. Sem querer, ela acaba no meio de um grupo de elite de estudantes apelidadas as poderosas.\n");
                    printf("Principais Atores: Lindsay Lohan, Rachel McAdams, Amanda Seyfried\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretor: Mark Waters\n");
                    printf("Duracao: 1h 36min\n");
                    printf("Pais e Ano: EUA, 2004\n");
                    break;
                //Matilda
                case 2:
                    printf("Sinopse: Matilda eh uma crianca brilhante que cresceu em meio a pais grosseiros e ignorantes. Ambos ignoram a filha, a ponto de esquecerem de matricula-la na escola. Desta forma, Matilda fica sempre em casa ou na livraria, onde costuma estimular sua imaginacao. Quando Matilda descobre que possui poderes magicos, Harry resolve envia-la a escola. O local eh controlado com mao de ferro pela diretora Agatha Trunchbull, entao Matilda precisa usar seu talento especial para proteger seus amigos e sua professora.\n");
                    printf("Principais Atores: Mara Wilson, Danny DeVito, Rhea Perlman\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretor: Danny DeVito\n");
                    printf("Duracao: 1h 38min\n");
                    printf("Pais e Ano: EUA, 1996\n");
                    break;
                //Misterio No Mediterraneo
                case 3:
                    printf("Sinopse: Numa aguardada viagem a Europa, um policial de Nova York e sua esposa cabeleireira tentam solucionar um caso de assassinato a bordo do iate de um bilionario.\n");
                    printf("Principais Atores: Adam Sandler, Jennifer Aniston, Luke Evans\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Kyle Newacheck\n");
                    printf("Duracao: 1h 38min\n");
                    printf("Pais e Ano: EUA, 2019\n");
                    break;
                //Isi e Ossi
                case 4:
                    printf("Sinopse: Para convencer os pais a deixa-la realizar seu sonho de estudar culinaria em Nova York, a filha de um bilionario finge estar namorando um boxeador pobre.\n");
                    printf("Principais Atores: Lisa Vicari, Dennis Mojen\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Oliver Kienle\n");
                    printf("Duracao: 1h 53min\n");
                    printf("Pais e Ano: Alemanha, 2020\n");
                    break;
                //Desnorteados
                case 5:
                    printf("Sinopse: Hugo e Braulio, dois jovens com formacao universitaria, fartos de uma Espanha incapaz de dar trabalho e um futuro, decidem emigrar para Alemanha seguindo os cantos de sereia de um programa de televisao tipo Espanhois pelo mundo. Mas logo descobrem que perseguir o sonho alemao pode ser um pesadelo.\n");
                    printf("Principais Atores: Yon Gonzalez, Julian Lopez, Blanca Suarez\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Nacho G. Velilla\n");
                    printf("Duracao: 1h 46min\n");
                    printf("Pais e Ano: Espanha, 2015\n");
                    break;
                //Nada a Esconder
                case 6:
                    printf("Sinopse: Em Nada a Esconder, durante um casual encontro, um grupo de amigos aproveita a rara oportunidade de desfrutar uma ocasiao em que todos possam estar juntos para conversar a respeito da vida. Quando a noite comeca a tomar um rumo inesperado, eles decidem organizar um jogo: todas as mensagens recebidas por cada um devem ser lidas em voz alta para todos na mesa. O resultado eh um desastroso efeito domino\n");
                    printf("Principais Atores: Berenice Bejo, Suzanne Clement, Stephane De Groodt\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Fred Cavaye\n");
                    printf("Duracao: 1h 33min\n");
                    printf("Pais e Ano: Franca, 2018\n");
                    break;
                }
            }
            break;
        //Romance
        case 4:
            //Nacional Adulto
            if (nacionalidade == 1 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Amores Possiveis\n");
                printf("2 - Pequeno Dicionario Amoroso 2\n");
                printf("3 - Os homens Sao de Marte? E e Pra La que Eu Vou\n");
                printf("4 -  S.O.S. Mulheres ao Mar 2\n");
                printf("5 - O Homem que Copiava\n");
                printf("6 - Paraiso Perdido\n");
                scanf("%d",&filme);
                switch(filme){
                //Amores Possiveis
                    case 1:
                        printf("Sinopse: Carlos e Julia combinam de ir ao cinema, mas ela acaba nao aparecendo. A partir dai, se desenrolam tres historias diferentes sobre os acontecimentos que poderiam vir em seguida, em tres versoes para um mesmo caso de amor.\n");
                        printf("Principais Atores:Murilo Benicio, Carolina Ferraz, Emilio de Mello, Beth Goulart, Irene Ravache\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretora: Sandra Werneck\n");
                        printf("Duracao: 98 min\n");
                        printf("Pais e Ano: Brasil, 2001\n");
                        break;
                    //Pequeno Dicionario Amoroso 2
                    case 2:
                        printf("Sinopse: Gabriel e Luiza est?o separados ha 16 anos. Agora, Luiza esta casada com Alex, com quem teve o sonhado filho. Gabriel namora Jaqueline, uma mulher bem mais nova e cheia de energia. Mesmo aparentemente felizes em seus relacionamentos, o interesse entre os dois renasce apos um inesperado encontro.\n");
                        printf("Principais Atores: Andrea Beltrao, Daniel Dantas, Fernanda de Freitas, Marcello Airoldi\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretores: Sandra Werneck, Mauro Farias\n");
                        printf("Duracao: 1h 30 min\n");
                        printf("Pais e Ano: Brasil, 2015\n");
                        break;
                    //Os homens Sao de Marte? E e Pra La que Eu Vou
                    case 3:
                        printf("Sinopse: Fernanda, de 39 anos, trabalha organizando casamentos. A grande ironia e que ela e solteira. A produtora lida com os mais diversos tipos de homem e reserva grande parte do seu tempo a procura do par perfeito.\n");
                        printf("Principais Atores:Monica Martelli, Paulo Gustavo, Daniele Valente, Irene Ravache, Marcos Palmeira, Eduardo Moscovis, Humberto Martins, Ana Lucia Torre, Julia Rabello, Lulu Santos, Alejandro Claveaux, Jose Loreto, Herson Capri\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Marcus Baldini\n");
                        printf("Duracao: 1h 48min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                    //S.O.S. Mulheres ao Mar 2
                    case 4:
                        printf("Sinopse: Adriana, uma escritora bem-sucedida, segue feliz em seu romance com Andre, que esta prestes a lan?ar sua mais nova cole??o de moda durante um cruzeiro pelo Caribe. Ao saber que a ex-noiva dele vai acompanha-lo na viagem em busca de uma reconciliacao, Adriana chama suas fieis escudeiras Luzia e Dialinda para embarcar no navio com eles.\n");
                        printf("Principais Atores: Giovanna Antonelli, Fabiula Nascimento, Thalita Carauta, Felipe Roque, Reynaldo Gianecchini, Rhaisa Batista, Gil Coelho\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Cris D?Amato\n");
                        printf("Duracao: 1h 32min\n");
                        printf("Pais e Ano: Brasil, 2015\n");
                        break;
                    //O Homem que Copiava
                    case 5:
                        printf("Sinopse: Um humilde operador de copiadora se apaixona pela vizinha e, para conseguir se aproximar da jovem, se transforma num falsificador de dinheiro.\n");
                        printf("Principais Atores: Lazaro Ramos, Leandra Leal, Luana Piovani, Pedro Cardoso\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Jorge Furtado\n");
                        printf("Duracao: 2h 4min\n");
                        printf("Pais e Ano: Brasil, 2003\n");
                        break;
                    //Paraiso Perdido
                    case 6:
                        printf("Sinopse: Paraiso Perdido e um clube noturno gerenciado por Jose (Erasmo Carlos) e movimentado por apresenta??es musicais de seus herdeiros. O policial Odair (Lee Taylor) se aproxima da familia ao ser contratado para fazer a seguran?a do jovem talento Ima (Jaloo), neto de Jose e alvo frequente de homofobicos, e aos poucos o laco entre o agente e o cla de artistas romanticos vai se revelando mais e mais forte - com nos surpreendentes.\n");
                        printf("Principais Atores: Jaloo, Lee Taylor, Julio Andrade, Malu Galli, Hermila Guedes, Marjorie Estiano, Julia Konrad, Erasmo Carlos, Seu Jorge, Humberto Carrao\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Monique Gardenberg\n");
                        printf("Duracao: 110min\n");
                        printf("Pais e Ano: Brasil, 2018\n");
                        break;
                }
            }
            //Nacional Crian?a
            else if (nacionalidade == 1 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Cinderela Pop\n");
                printf("2 - Qualquer gato Vira-Lata\n");
                printf("3 - S.O.S. Mulheres ao Mar 1\n");
                printf("4 - Riscos de Amor\n");
                printf("5 - Amor.com\n");
                printf("6 - Hoje Eu Quero Voltar Sozinho\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //Cinderela Pop
                    case 1:
                        printf("Sinopse: Cintia Dorella e romantica menina de 16 anos que sonha em encontrar o cara ideal, mas ve seu mundo ruir quando descobre que seu pai esta traindo sua mae. Descrente no amor, ela vai morar na casa da tia e passa a trabalhar como DJ, se tornando a Cinderela Pop. Com a vida virada de cabe?a para baixo, Cintia acaba se apaixonando por Freddy, um cantor de sucesso e verdadeiro pr?ncipe encantado dos dias atuais, mas tambem precisa lidar com as filhas de sua madrasta, que tambem desejam o rapaz.\n");
                        printf("Principais Atores:Maisa Silva, Filipe Bragan?a, Fernanda Paes Leme\n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretor: Bruno Garotti\n");
                        printf("Duracao: 1h 35min \n");
                        printf("Pais e Ano: Brasil, 2019\n");
                        break;
                    //Qualquer Gato Vira-Lata
                    case 2:
                        printf("Sinopse: Depois de ser desprezada pelo namorado mimado e mulherengo, Tati busca maneiras de reconquista-lo. Para isso, ela procura Conrado, um professor de biologia que defende uma pol?mica tese sobre as conquistas afetivas humanas e as atitudes dos animais.\n");
                        printf("Principais Atores: Cleo Pires, Dudu Azevedo, Malvino Salvador, Lis Luciddi, Rita Guedes, Alamo Faco, Leticia Novaes, Yasmin Mitri\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretores: Tomas Portella, Daniela De Carlo\n");
                        printf("Duracao: 1h 40 min\n");
                        printf("Pais e Ano: Brasil, 2011\n");
                        break;
                    //S.O.S. Mulheres ao Mar 1
                    case 3:
                        printf("Sinopse: Adriana e abandonada por Eduardo, seu esposo. Desiludida com a separa??o, ela resolve reconquistar o ex-marido, embarcando no mesmo cruzeiro onde ele esta com a nova namorada, Beatriz, uma estrela da TV. Adriana embarca no navio com a irma, Luiza, e a empregada, Dialinda. Decididas a arruinar a viagem de Eduardo e de sua namorada, essas tres mulheres acabam descobrindo novos e inesperados caminhos para suas vidas.\n");
                        printf("Principais Atores: Giovanna Antonelli, Fabiula Nascimento, Thalita Carauta, Reynaldo Gianecchini, Marcello Airoldi, Emanuelle Araujo, Theresa Amayo, Sergio Muniz, Flavio Galvao, Karina Marthin, Rodrigo Ferrarini\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Cris D?Amato\n");
                        printf("Duracao: 1h 34min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                    //Ricos de Amo
                    case 4:
                        printf("Sinopse: Teto e filho de Teodoro, um empresario rico que e conhecido como O Rei do Tomate. O rapaz, que em breve herdara a fabrica do pai, se apaixona por Paula, uma jovem decidida que estuda para ser medica e nao ve a hora de se tornar independente. Com medo da reacao da garota, Teto mente sobre sua condicao financeira e finge ter origem humilde. Por?m, essa mentira o coloca em uma serie de desentendimentos.\n");
                        printf("Principais Atores: Danilo Mesquita, Giovanna Lancellotti, Fernanda Paes Leme\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Bruno Garotti\n");
                        printf("Duracao: 1h 44min\n");
                        printf("Pais e Ano: Brasil, 2020\n");
                        break;
                    //Amor.com
                    case 5:
                        printf("Sinopse: Katrina e uma famosa blogueira de moda que dita tendencias no mercado brasileiro atraves de seus populares videos na internet. Fernando, por sua vez, e um vlogueiro de um canal de videogames que ainda nao e muito famoso, mas que ja esta fazendo certo sucesso. Quando os dois se conhecem, em uma situa??o complicada, acabam se apaixonando e o romance dos dois ganha destaque na internet.\n");
                        printf("Principais Atores: Isis Valverde, Gil Coelho, Joaquim Lopes, Cesar Cardadeiro, Marcos Mion, Alexandra Richter, Carol Portes, Joao Cortes, Felipe Roque, Thaynara OG, Jesus Luz, Ellen Jabour \n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretor: Anita Barbosa\n");
                        printf("Duracao: 1h 32min\n");
                        printf("Pais e Ano: Brasil, 2017\n");
                        break;
                    //Hoje Eu Quero Voltar Sozinho
                    case 6:
                        printf("Sinopse: Leonardo, um adolescente cego, tenta lidar com a mae superprotetora ao mesmo tempo em que busca sua independencia. Quando Gabriel chega em seu colegio, novos sentimentos come?am a surgir em Leonardo, fazendo com que ele descubra mais sobre si mesmo e sua sexualidade.\n");
                        printf("Principais Atores: Ghilherme Lobo, Fabio Audi, Tess Amorim, Selma Egrei\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Daniel Ribeiro\n");
                        printf("Duracao: 1h 37min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                }
            }
            //Estrangeiro Adulto
            else if (nacionalidade == 2 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Perfeita pra Voce\n");
                printf("2 - Por Lugares Incriveis\n");
                printf("3 - Holding The Man\n");
                printf("4 - Simplesmente Acontece\n");
                printf("5 - Alex Strangelove\n");
                printf("6 - Quase 18\n");
                scanf("%d",&filme);
                switch(filme){
                //Perfeita pra Voce
                    case 1:
                        printf("Sinopse: Traduzido do ingl?s-Irreplaceable You ? um filme americano de com?dia dram?tica de 2018 dirigido por Stephanie Laing e escrito por Bess Wohl. O filme ? estrelado por Gugu Mbatha-Raw e Michiel Huisman. Foi lan?ado pela Netflix em 16 de fevereiro de 2018.\n");
                        printf("Principais Atores: Gugu Mbatha-Raw, Michael Huismain\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretora: Stephanie Laing\n");
                        printf("Duracao: 1h 36min\n");
                        printf("Pais e Ano: Estados Unidos, 2018\n");
                        break;
                    //Por Lugares Incriveis
                    case 2:
                        printf("Sinopse: Dois adolescentes que estao passando por momentos dificeis criam um forte laco quando embarcam em uma jornada transformadora para visitar as maravilhas do estado de Indiana, nos Estados Unidos.\n");
                        printf("Principais Atores: Elle Fanning, Justice Smith\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor:  Brett Haley\n");
                        printf("Duracao: 1h 47min \n");
                        printf("Pais e Ano: Estados Unidos, 2020\n");
                        break;
                    //Holding The Man
                    case 3:
                        printf("Sinopse: Holding the Man e um filme de drama e romance australiano de 2015, adaptado das memorias homonimas de Timothy Conigrave escritas em 1995. Foi dirigido por Neil Armfield e estrelado por Ryan Corr e Craig Stott, com atuacoes secundarias de Guy Pearce, Anthony LaPaglia, Sarah Snook, Kerry Fox e Geoffrey Rush.\n");
                        printf("Principais Atores: Ryan Corr, Craig Stot\n");
                        printf("Faixa etaria: 18 anos\n");
                        printf("Diretor:  Neil Armfiels\n");
                        printf("Duracao: 2h 8min\n");
                        printf("Pais e Ano: Australiano, 2015\n");
                        break;
                    //Simplesmente Acontece
                    case 4:
                        printf("Sinopse: Alex e Rosie sao amigos inseparaveis que cresceram juntos em Londres, compartilhando entre si suas melhores experiencias. Tudo muda quando Alex ganha uma bolsa de estudos e passa a morar nos EUA. Separados, seus caminhos agora sao outros. Mas nos tempos de hoje e impossivel nao se conectar. E, em se tratando de amor, o difiil e fazer as escolhas certas.\n");
                        printf("Principais Atores: Lily Collins, Sam Claflin\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Christian Ditter\n");
                        printf("Duracao: 1h 14min\n");
                        printf("Pais e Ano: Reino Unido, 2014\n");
                        break;
                    //Alex Strangelove
                    case 5:
                        printf("Sinopse: O adolescente Alex Truelove (tem a vida perfeita ? notas boas, namorada (Madeline Weinstein) e uma turma maluca e divertida. Tudo corre bem ate o dia em que ele decide perder a virgindade ? e conhece Elliott, um garoto gay gentil e seguro de si mesmo que n?o tem medo de demonstrar seu interesse por Alex? que talvez sinta a mesma atra?ao. Arremessado em uma incr?vel jornada de autodescoberta pessoal e sexual, Alex percebe que a vida e o amor podem ser complicados. E que tudo bem.\n");
                        printf("Principais Atores: Daniel Doheny, Antonio Marziale, Madeline Weinstein\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Craig Johson \n");
                        printf("Duracao: 1h 39min\n");
                        printf("Pais e Ano: Estados Unidos, 2018\n");
                        break;
                    //Quase 18
                    case 6:
                        printf("Sinopse: Nadine esta enfrentando uma dificil situa??o desde que sua melhor amiga, Krista, esta namorando com o seu irmao mais velho, Darian. Nadine se sente mais sozinha do que nunca, ao menos ate come?ar uma amizade com um jovem atencioso.\n");
                        printf("Principais Atores: Hailee Steinfield, Haley Lu Richardson, woody Harrelson, Blake Jenner\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretora: Kelly Fremon\n");
                        printf("Duracao: 1h 44minn");
                        printf("Pais e Ano: Estados Unidos, 2016\n");
                        break;
                }
            }
            //Estrangeiro Crian?a
            else if (nacionalidade == 2 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Sol da Meia-Noite\n");
                printf("2 - 10 Coisas que Eu Odeio em Voce\n");
                printf("3 - Como Eu Era Antes de Voce\n");
                printf("4 - A cinco Passos de Voce\n");
                printf("5 - A Culpa e das Estrelas\n");
                printf("6 - Com Amor, Simon\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //Sol da Meia-Noite
                    case 1:
                        printf("Sinopse: Katie e uma jovem de 17 anos que vive protegida dentro de sua casa desde a infancia. Confinada no local durante os dias, ela possui uma rara doenca que faz com que a menor quantidade de luz solar seja mortal. Sua situa??o muda quando seu destino se cruza com o de Charlie e eles iniciam um romance de verao.\n");
                        printf("Principais Atores: Bella Thorne, Patrick Schwarzenegeer\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Scott speer\n");
                        printf("Duracao: 1h 34min\n");
                        printf("Pais e Ano: Estados Unidos , 2018\n");
                        break;
                    //10 Coisas que Eu Odeio em Voce
                    case 2:
                        printf("Sinopse: Bianca Stratford e bonita e popular, mas nao pode namorar antes de sua irma mais velha. O problema e que nenhum garoto consegue chegar perto da irma, Kat Stratford. Para resolver a situacao, um rapaz interessado em Bianca suborna um amigo com passado misterioso para sair com Kat e, quem sabe, tentar conquista-la.\n");
                        printf("Principais Atores: Julia Stiles, Heath Ledger \n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretores: Gil Junger\n");
                        printf("Duracao: 1h 39min \n");
                        printf("Pais e Ano: Estados Unidos, 1999\n");
                        break;
                    //Como Eu Era Antes de Voce
                    case 3:
                        printf("Sinopse: De origem modesta e sem grandes aspiracoes, a peculiar Louisa Clark e contratada para ser cuidadora de Will, um jovem tetraplegico depressivo e cinico.\n");
                        printf("Principais Atores: Emilia Clarke, Sam Claflin\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Thea Sharrock\n");
                        printf("Duracao: 1h 51min\n");
                        printf("Pais e Ano: Estados Unidos, 2016\n");
                        break;
                    //A cinco Passos de Voce
                    case 4:
                        printf("Sinopse: Dois pacientes com fibrose cistica se apaixonam, apesar das regras do hospital afirmarem que eles devem manter 1,5 metros de distancia entre si.\n");
                        printf("Principais Atores: Cole Sprouse, Haley Lu Richardson\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Justin Baldoni\n");
                        printf("Duracao: 1h 57min\n");
                        printf("Pais e Ano: Estados Unidos, 2019\n");
                        break;
                    //A Culpa e das Estrelas
                    case 5:
                        printf("Sinopse: Hazel Grace Lancaster e Augustus Waters s?o dois adolescentes que se conhecem em um grupo de apoio para pacientes com cancer. Por causa da doenca, Hazel sempre descartou a ideia de se envolver amorosamente, mas acaba cedendo ao se apaixonar por Augustus. Juntos, eles viajam para Amsterda, onde embarcam em uma jornada inesquecivel.\n");
                        printf("Principais Atores: Shailene Woodley, Ansel Elgort\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: Josh Boone\n");
                        printf("Duracao: 2h 13 min  \n");
                        printf("Pais e Ano: Estados Unidos ,2014 \n");
                        break;
                    //Com Amor, Simon
                    case 6:
                        printf("Sinopse: Aos 17 anos, Simon Spier aparenta levar uma vida comum, mas sofre por esconder um grande segredo: nao revelou ser gay para sua familia e amigos. E tudo fica mais complicado quando ele se apaixona por um dos colegas de classe, anonimo, na internet.\n");
                        printf("Principais Atores: Nick Robinson, Keyinan Lonsdale, Katherine Langford\n");
                        printf("Faixa etaria: 12 anos\n");
                        printf("Diretor: greg Berlati\n");
                        printf("Duracao: 1h 50min\n");
                        printf("Pais e Ano: Estados Unidos, 2018\n");
                        break;
                }
            }
            break;
        //Fic??o Cientifica
        case 5:
            //Nacional Adulto
            if (nacionalidade == 1 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - O 5 Poder\n");
                printf("2 - 1,99 - Um Supermercado Que Vende Palavras\n");
                printf("3 - A Nuvem Rosa\n");
                printf("4 - Uma Historia de Amor e Furia\n");
                printf("5 - Divino Amor\n");
                printf("6 - O Efeito Ilha\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //O 5 Poder
                case 1:
                    printf("Sinopse: Uma potencia estrangeira tenta dominar o mundo atraves da propaganda subliminar, que pode atingir os niveis inconscientes das mentes das pessoas por meio de artefatos eletronicos. Um jornalista come?a a investigar uma serie de fatos para descobrir os responsaveis pelos disturbios e evitar que o pais entre em um estado de colapso irreversivel.\n");
                    printf("Principais Atores: Eva Wilma, Sebastiao Vaconcelos, Oswaldo Loureiro, Nildo Parente\n");
                    printf("Faixa etaria: 16 Anos\n");
                    printf("Diretor: Alberto Pieralisi\n");
                    printf("Duracao: 1h 40min\n");
                    printf("Pais e Ano: Brasil, 1962\n");
                    break;
                //1,99
                case 2:
                    printf("Sinopse: Em uma cr?tica a sociedade moderna, o filme concentra os acontecimentos em um mercado ficticio onde pessoas robotizadas compram produtos que, na verdade, sao slogans e sentimentos - nada de concreto.\n");
                    printf("Principais Atores: Marcio Camargo, Giseli Duarte, Sergio Capezzuto, Patricia Gordo, Chico Neto, Dan Nakagawa\n");
                    printf("Faixa etaria: 16 Anos\n");
                    printf("Diretor: Marcelo Masagao\n");
                    printf("Duracao: 1h 12min\n");
                    printf("Pais e Ano: Brasil, 2003\n");
                    break;
                //A Nuvem Rosa
                case 3:
                    printf("Sinopse: Em uma cr?tica a sociedade moderna, o filme concentra os acontecimentos em um mercado ficticio onde pessoas robotizadas compram produtos que, na verdade, sao slogans e sentimentos - nada de concreto.\n");
                    printf("Principais Atores: Renata Lelis, Edduardo Mendonca, Kaya Rodrigues, Helena Becker\n");
                    printf("Faixa etaria: 16 Anos\n");
                    printf("Diretor: Iuli Gerbase\n");
                    printf("Duracao: 1h 45min\n");
                    printf("Pais e Ano: Brasil, 2021\n");
                    break;
                //Uma historia de amor e furia
                case 4:
                    printf("Sinopse: Um indio guerreiro imortal ve 600 anos do passado e do futuro do Brasil enquanto procura a alma perdida de sua amada.\n");
                    printf("Principais Atores: Selton Mello, Camilla Pitanga, Rodrigo Santoro, Lais Bodanzky\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Luiz Bolognesi\n");
                    printf("Duracao: 1h 38min\n");
                    printf("Pais e Ano: Brasil, 2013\n");
                    break;
                //Divino Amor
                case 5:
                    printf("Sinopse: Joana, uma escriva de cartorio, usa sua posicao no trabalho para salvar casais que chegam para se divorciar. Ela faz de tudo para levar os clientes a participarem de uma terapia religiosa de reconciliacao no grupo Divino Amor. Tudo e em nome de um projeto maior para a manuten??o da familia sagrada dentro da fe e da fidelidade conjugal.\n");
                    printf("Principais Atores: Dira Paes, Julio Machado, Mariana Nunes, Clayton Mariano\n");
                    printf("Faixa etaria: 18 Anos\n");
                    printf("Diretor: Gabriel Mascaro\n");
                    printf("Duracao: 1h 41min\n");
                    printf("Pais e Ano: Brasil, 2019\n");
                    break;
                //O Efeito Ilha
                case 6:
                    printf("Sinopse: Depois de receber uma descarga eletrica em plena Copa do Mundo, um tecnico de televisao e vitima de um estranho fenomeno e sua imagem passa a ocupar todos os canais de TV, 24 horas por dia, interferindo na vida e no comportamento das pessoas.\n");
                    printf("Principais Atores: Denise Fraga, Antonio Calloni, Vera Zimmer, Angela Dip\n");
                    printf("Faixa etaria: 14 Anos\n");
                    printf("Diretor: Luiz Alberto Pereira\n");
                    printf("Duracao: 1h 41min\n");
                    printf("Pais e Ano: Brasil, 1994\n");
                    break;
                }
            }
            //Nacional Crian?a
            else if (nacionalidade == 1 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - O Homem do Futuro\n");
                printf("2 - Quem e Beta?\n");
                printf("3 - Abrigo Nuclear\n");
                printf("4 - Os Cosmonautas\n");
                printf("5 - Branco Sai, Preto Fica\n");
                printf("6 - Acquaria\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //O homem do futuro
                case 1:
                    printf("Sinopse: Zero e um cientista ridicularizado cuja ultima invencao o levou ao passado, lhe dando a chance de refazer sua vida. De volta a epoca de faculdade, ele reencontra Helena, sua paixao, mas acaba interferindo em acontecimentos do futuro. Agora, Zero precisa consertar o futuro sem perder Helena de novo.\n");
                    printf("Principais Atores: Wagner Moura, Alinne Moraes, Maria Luisa Mendonca, Gabriel Braga Nunes\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretor: Claudio Torres\n");
                    printf("Duracao: 1h 46min\n");
                    printf("Pais e Ano: Brasil, 2011\n");
                    break;
                //Quem e Beta
                case 2:
                    printf("Sinopse: Depois de uma catastrofe destruir a sociedade civilizada, um casal come?a uma nova vida em um abrigo. Sua missao e exterminar os seres contaminados, condenados a vagar como zumbis ate a morte.\n");
                    printf("Principais Atores: Noele Adam, Sylvie Fennec, Frederic de Pasquale\n");
                    printf("Faixa etaria: 12 Anos\n");
                    printf("Diretor: Nelson Pereira dos Santos\n");
                    printf("Duracao: 1h 32min\n");
                    printf("Pais e Ano: Brasil, 1972\n");
                    break;
                //Abrigo Nuclear
                case 3:
                    printf("Sinopse: Os habitantes de um abrigo subterraneo, construido para preservar a raca humana da poluicao radioativa, vivem sob um regime controlado pela comandante Avo. Apesar de protegidos, eles nutrem a esperanca de sairem um dia.\n");
                    printf("Principais Atores: Roberto Pires, Ronny Pires, Conceicao Senna, Norma Bengell\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretor: Roberto Pires\n");
                    printf("Duracao: 1h 26min\n");
                    printf("Pais e Ano: Brasil, 1981\n");
                    break;
                //Os Cosmonautas
                case 4:
                    printf("Sinopse: Apos o sucesso da primeira missao espacial brasileira, um cientista pretende realizar um feito ainda mais audacioso. Seu objetivo e lancar ao espa?o o foguete Nacionalista II, dessa vez levando dois humanos a lua.\n");
                    printf("Principais Atores: Neide Aparecida, Telma Elita, Grande Otelo, Atila lorio\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretor: Victor Lima\n");
                    printf("Duracao: 1h 30min\n");
                    printf("Pais e Ano: Brasil, 1962\n");
                    break;
                //Branco sai, Preto Fica
                case 5:
                    printf("Sinopse: Apos o sucesso da primeira missao espacial brasileira, um cientista pretende realizar um feito ainda mais audacioso. Seu objetivo e lancar ao espa?o o foguete Nacionalista II, dessa vez levando dois humanos a lua.\n");
                    printf("Principais Atores: Marquim do Tropa, Dilmar Duraes, Shokito, DJ Jamaika, Gleide Firmino\n");
                    printf("Faixa etaria: 12 anos\n");
                    printf("Diretor: Adirley Queiros\n");
                    printf("Duracao: 1h 33min\n");
                    printf("Pais e Ano: Brasil, 2014\n");
                    break;
                //Acquaria
                case 6:
                    printf("Sinopse: Apos constantes agressoes a natureza, a agua do planeta esta praticamente esgotada e os jovens Sarah e Kim, ao lado de seus amigos, tentam encontrar uma forma de obter este bem tao precioso e indispensavel para a sobrevivencia da humanidade.\n");
                    printf("Principais Atores: Sandy, Emilio Orciollo, Junior Lima, Igor Rudolf\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretor: Flavia Moraes\n");
                    printf("Duracao: 1h 43min\n");
                    printf("Pais e Ano: Brasil, 2003\n");
                    break;
                }
             }
            //Estrangeiro Adulto
            else if (nacionalidade == 2 && idade>14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Venom\n");
                printf("2 - Blade Runner 2049\n");
                printf("3 - Upgrade: Atualizacao\n");
                printf("4 - Ex_Machina: Instinto Artificial\n");
                printf("5 - Matrix\n");
                printf("6 - Filhos da Esperanca\n");
                scanf("%d",&filme);
                switch(filme)
                {
                    //Venom
                    case 1:
                        printf("Sinopse: O jornalista Eddie Brock desenvolve forca e poder sobre-humanos quando seu corpo se funde com o alienigena Venom. Dominado pela raiva, Venom tenta controlar as novas e perigosas habilidades de Eddie.\n");
                        printf("Principais Atores: Tom Hardy, Michelle Williams, Woodly Harrelson\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Ruben Fleischer\n");
                        printf("Duracao: 2h 20min\n");
                        printf("Pais e Ano: EUA, 2018\n");
                        break;
                    //Blade Runner
                    case 2:
                        printf("Sinopse: Apos descobrir um segredo enterrado ha muito tempo, que ameaca o que resta da sociedade, um novo policial embarca na busca de Rick Deckard, que esta desaparecido ha 30 anos.\n");
                        printf("Principais Atores: Ryan Gosling, Harrison Ford, Ana de Armas\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Denis Villeneuve\n");
                        printf("Duracao: 2h 44min\n");
                        printf("Pais e Ano: EUA, 2017\n");
                        break;
                    //Upgrade
                    case 3:
                        printf("Sinopse: No futuro proximo, a tecnologia controla quase todos os aspectos da vida. Mas quando Gray, um tecnofobico, tem seu mundo virado de cabeca para baixo, sua unica esperanca de vinganca e um implante experimental de chips de computador chamado Stem.\n");
                        printf("Principais Atores: Logan Marshall-Green, Harrison Gilbertson, Betty Gabriel\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Leigh Whannell\n");
                        printf("Duracao: 1h 41min\n");
                        printf("Pais e Ano: Australia, 2018\n");
                        break;
                    //Ex_Machina
                    case 4:
                        printf("Sinopse: Um jovem programador chamado Caleb ganha um concurso e recebe a oportunidade de testar uma inteligencia artificial criada por Nathan, um brilhante e recluso bilionario. Mas conforme os testes progridem, Caleb descobre que essa inteligencia artificial e tao sofisticada e imprevisivel que ele nao sabe mais em quem confiar.\n");
                        printf("Principais Atores: Alicia Vikander, Oscar Isaac, Domhnall Gleeson\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Alex Garland\n");
                        printf("Duracao: 1h 48min\n");
                        printf("Pais e Ano: Inglaterra, 2014\n");
                        break;
                    //Matrix
                    case 5:
                        printf("Sinopse: Um jovem programador e atormentado por estranhos pesadelos nos quais sempre esta conectado por cabos a um imenso sistema de computadores do futuro. A medida que o sonho se repete, ele comeca a levantar duvidas sobre a realidade. E quando encontra os misteriosos Morpheus e Trinity, ele descobre que e vitima do Matrix, um sistema inteligente e artificial que manipula a mente das pessoas e cria a ilusao de um mundo real enquanto usa os cerebros e corpos dos individuos para produzir energia.\n");
                        printf("Principais Atores: Keanu Reeves, Carrie-Anne Moss, Laurence Fishburne\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretoras: Lana Wachowski, Lilly Wachowski\n");
                        printf("Duracao: 2h 16min\n");
                        printf("Pais e Ano: Australia-EUA, 1999\n");
                        break;
                    //Filhos da Esperanca
                    case 6:
                        printf("Sinopse: No ano de 2027, a infertilidade e uma ameaca real para a civilizacao, e o ultimo humano a nascer em anos acaba de morrer. Frente a um cenario pessimista sobre o futuro, um burocrata desiludido se torna o heroi improvavel que pode salvar a humanidade. Para isso, ele enfrenta seus proprios demonios e tenta proteger a ultima esperan?a do planeta: uma jovem mulher milagrosamente gravida, descoberta pela ativista inteligente com quem fora casado.\n");
                        printf("Principais Atores: Clive Owen, Julianne Moore, Michael Caine\n");
                        printf("Faixa etaria: 16 Anos\n");
                        printf("Diretor: Alfonso Cuar?n\n");
                        printf("Duracao: 1h 54min\n");
                        printf("Pais e Ano: Inglaterra-EUA, 2006\n");
                        break;
                }
            }
            //Estrangeiro Crian?a
            else if (nacionalidade == 2 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - De volta para o futuro\n");
                printf("2 - De volta para o futuro 2\n");
                printf("3 - De volta para o futuro 3\n");
                printf("4 - Interestelar\n");
                printf("5 - Star Wars: Episodio I ? A Amea?a Fantasma\n");
                printf("6 - Star Wars: Episodio 2 ? Ataque dos Clones\n");
                scanf("%d",&filme);
                switch(filme)
                {
                    //De Volta 1
                    case 1:
                        printf("Sinopse: Marty McFly, um adolescente de uma pequena cidade californiana, e transportado para a decada de 1950 quando a experiencia do excentrico cientista Doc Brown da errado. Viajando no tempo em um carro modificado, Marty conhece versoes jovens de seus pais e precisa fazer com que eles se apaixonem, ou entao ele deixara de existir. Para complicar, Marty precisa voltar para casa a tempo de salvar o cientista.\n");
                        printf("Principais Atores: Michael J. Fox, Cristopher Lloyd, Lea Thompson, Claudia Wells\n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretor: Robert Zemeckis\n");
                        printf("Duracao: 1h 56min\n");
                        printf("Pais e Ano: EUA, 1985\n");
                        break;
                    //De Volta 2
                    case 2:
                        printf("Sinopse: Marty McFly e o cientista Doc viajam de 1985 a 2015 para evitar que o filho de Marty estrague o futuro da familia McFly. Porem, seu arqui-inimigo Biff Tannen rouba a maquina do tempo de Doc, o DeLorean, e a usa para alterar a historia em seu beneficio, forcando a dupla a retornar a 1955 para restaurar a linha do tempo.\n");
                        printf("Principais Atores: Michael J. Fox, Cristopher Lloyd, Lea Thompson, Elisabeth Shue\n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretor: Robert Zemeckis\n");
                        printf("Duracao: 1h 48min\n");
                        printf("Pais e Ano: EUA, 1989\n");
                        break;
                    //De Volta 3
                    case 3:
                        printf("Sinopse: Marty recebe uma mensagem do Dr. Emmett Brown, na qual ele informa que agora vive em uma pequena cidade do Velho Oeste, em 1885. Quando Marty descobre que Doc acabara sendo assassinado dias apos o envio da carta, ele decide voltar no tempo mais uma vez para salvar seu amigo deste tragico destino.\n");
                        printf("Principais Atores: Michael J. Fox, Cristopher Lloyd, Lea Thompson, Thomas F. Wilson\n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretor: Robert Zemeckis\n");
                        printf("Duracao: 1h 59min\n");
                        printf("Pais e Ano: EUA, 1990\n");
                        break;
                    //Interestelar
                    case 4:
                        printf("Sinopse: As reservas naturais da Terra estao chegando ao fim e um grupo de astronautas recebe a missao de verificar possiveis planetas para receberem a populacao mundial, possibilitando a continuacao da especie. Cooper e chamado para liderar o grupo e aceita a missao sabendo que pode nunca mais ver os filhos. Ao lado de Brand, Jenkins e Doyle, ele seguira em busca de um novo lar.\n");
                        printf("Principais Atores: Matthew McConaughey, Anne Hathawhay, Mackenzie Foy, Jessica Chastain\n");
                        printf("Faixa etaria: 10 Anos\n");
                        printf("Diretor: Christopher Nolan\n");
                        printf("Duracao: 2h 49min\n");
                        printf("Pais e Ano: Inglaterra-EUA, 1990\n");
                        break;
                    //Star Wars I
                    case 5:
                        printf("Sinopse: Obi-Wan e seu mentor embarcam em uma perigosa aventura na tentativa de salvar o planeta das garras de Darth Sidious. Durante a viagem, eles conhecem um habilidoso menino e decidem treina-lo para se tornar um Jedi. Mas o tempo ira revelar que as coisas nem sempre sao o que aparentam ser.\n");
                        printf("Principais Atores: Natalie Portman, Keira Knightley, Liam Nesson, Ewan McGregor\n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretor: George Lucas\n");
                        printf("Duracao: 2h 16min\n");
                        printf("Pais e Ano: EUA, 1999\n");
                        break;
                    //Star Wars II
                    case 6:
                        printf("Sinopse: Tentado por promessas de poder, Anakin Skywalker se aproxima de Darth Sidious e participa de um plano para acabar com os Cavaleiros Jedi.\n");
                        printf("Principais Atores: Natalie Portman, Ewan McGregor, Hayden Christensen\n");
                        printf("Faixa etaria: Livre\n");
                        printf("Diretor: George Lucas\n");
                        printf("Duracao: 2h 22min\n");
                        printf("Pais e Ano: EUA, 2002\n");
                        break;
                }
            }
            break;
        //Terror
        case 6:
            //Nacional Adulto
            if (nacionalidade == 1 && idade>14)
            {
                printf ("Escolha o filme:\n");
                printf ("1 - As Boas Maneiras\n");
                printf ("2 - A Sombra do Pai\n");
                printf ("3 - Morto Nao Fala\n");
                printf ("4 - A Mata Negra\n");
                printf ("5 - Canto dos Ossos\n");
                printf ("6 - A Meia Noite Levarei Sua Alma\n");
                scanf ("%d", &filme);
                switch(filme)
                {
                    //As Boas Maneiras
                    case 1:
                        printf("Sinopse: Ana, uma mulher rica e misteriosa, contrata a enfermeira Clara para ser a baba de seu filho que ainda nao nasceu. Quando a lua cheia traz o nascimento de um lobisomem, Clara assume a missao de cuidar do bebe e protege-lo de outras pessoas.\n");
                        printf("Principais Atores: Cida Moreira, Marjorie Estiano, Andrea Marquee, Isabel Zuaa\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretores: Juliana Rojas, Marco Dutra\n");
                        printf("Duracao: 2h 15min\n");
                        printf("Pais e Ano: Brasil, 2017\n");
                        break;
                    //A Sombra do Pai
                    case 2:
                        printf("Sinopse: Uma crianca e obrigada a virar o adulto da casa porque seu pai esta doente e, sua mae, morta. Isso naturalmente cria uma inversao na ordem natural das coisas. A infancia se transforma em saga, e a paternidade frustrada em condenacao.\n");
                        printf("Principais Atores: Luciana Paes, Nina Medeiros, Julio Machado, Dinho Lima Flor\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Gabriela Amaral Almeida\n");
                        printf("Duracao: 1h 32min\n");
                        printf("Pais e Ano: Brasil, 2018\n");
                        break;
                    //Morto n?o Fala
                    case 3:
                        printf("Sinopse: Stenio e plantonista noturno no necroterio de uma grande e violenta cidade. Em suas madrugadas de trabalho, ele nunca esta so, pois possui um dom paranormal de comunicacao com os mortos. Quando as confidencias que ouve do alem, contudo, revelam segredos de sua propria vida, Stenio desencadeia uma maldicao que traz perigo e morte para perto de si e de sua familia.\n");
                        printf("Principais Atores: Bianca Comparato, Fabiula Nascimento, Daniel de Oliveira\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Dennison Ramalho\n");
                        printf("Duracao: 1h 49min\n");
                        printf("Pais e Ano: Brasil, 2018\n");
                        break;
                    //A Mata Negra
                    case 4:
                        printf("Sinopse: Em uma floresta do interior do Brasil, a jovem Clara ve sua vida mudar para sempre quando encontra o Livro Perdido de Cipriano, cuja magia, alem de conceder poder e riqueza a quem o possui, e capaz de libertar uma terrivel maldicao sobre a terra.\n");
                        printf("Principais Atores: Carol Aragao, Markus Konka, Clarissa Pinheiro\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Dennison Ramalho\n");
                        printf("Duracao: 1h 38min\n");
                        printf("Pais e Ano: Brasil, 2018\n");
                        break;
                    //Canto dos Ossos
                    case 5:
                        printf("Sinopse: Duas vampiras decidem se separar, seguindo rumos diferentes em suas vidas. Decadas depois, uma delas e professora do ensino medio em uma pequena cidade litoranea, enquanto a outra vive pela noite cacando suas presas./n");
                        printf("Principais Atores: Noa Bonoba, Rosalina Tamiza, Lucas Inacio Nascimento/n");
                        printf("Faixa etaria: 14 anos/n");
                        printf("Diretores: Jorge Polo, Petrus de Bairros/n");
                        printf("Duracao: 1h 29min/n");
                        printf("Pais e Ano: Brasil, 2020/n");
                        break;
                    //A meia noite levarei sua alma
                    case 6:
                        printf("Sinopse: O sadico e cruel coveiro Ze do Caixao pretende gerar um filho perfeito para dar continuidade ao seu sangue. No entanto, sua mulher nao consegue engravidar e ele acaba violentando a mulher do seu melhor amigo. A moca agredida pelo coveiro quer se suicidar com o intuito de regressar do mundo dos mortos e levar a alma de Ze do Caixao.\n");
                        printf("Principais Atores: Jose Mojica Marins, Mario Lima, Carmen Marins\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Jose Mojica Marins\n");
                        printf("Duracao: 1h 24min\n");
                        printf("Pais e Ano: Brasil, 1964\n");
                        break;
                }
            }
            //Nacional Crian?a
            else if (nacionalidade == 1 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - As Boas Maneiras\n");
                printf("2 - Morto Nao Fala\n");
                printf("3 - Canto dos Ossos\n");
                printf("4 - Gemeas\n");
                printf("5 - Quando eu era vivo\n");
                printf("6 - A Noite Amarela\n");
                scanf("%d",&filme);
                switch (filme)
                {
                    //As Boas Maneiras
                    case 1:
                        printf("Sinopse: Ana, uma mulher rica e misteriosa, contrata a enfermeira Clara para ser a baba de seu filho que ainda nao nasceu. Quando a lua cheia traz o nascimento de um lobisomem, Clara assume a missao de cuidar do bebe e protege-lo de outras pessoas.\n");
                        printf("Principais Atores: Isabel Zuaa, Marjorie Estiano, Eduardo Gomes\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretores: Juliana Rojas, Marco Dutra\n");
                        printf("Duracao: 2h 16min\n");
                        printf("Pais e Ano: Brasil, 2017\n");
                        break;
                    //Morto Nao Fala
                    case 2:
                        printf("Sinopse: Stenio eh plantonista noturno no necroterio de uma grande e violenta cidade. Em suas madrugadas de trabalho, ele nunca esta so, pois possui um dom paranormal de comunicacao com os mortos. Quando as confidencias que ouve do alem, contudo, revelam segredos de sua propria vida, Stenio desencadeia uma maldicao que traz perigo e morte para perto de si e de sua familia.\n");
                        printf("Principais Atores: Daniel de Oliveira, Fabiula Nascimento, Bianca Comparato\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Dennison Ramalho\n");
                        printf("Duracao: 1h 50min\n");
                        printf("Pais e Ano: Brasil, 2018\n");
                        break;
                    //Canto dos Ossos
                    case 3:
                        printf("Sinopse: Duas vampiras decidem se separar, seguindo rumos diferentes em suas vidas. Decadas depois, uma delas eh professora do ensino medio em uma pequena cidade litoranea, enquanto a outra vive pela noite cacando suas presas.\n");
                        printf("Principais Atores: Rosalina Tamiza, Maricota, Lucas Inacio Nascimento\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretores: Jorge Polo, Petrus de Bairros\n");
                        printf("Duracao: 1h 28min\n");
                        printf("Pais e Ano: Brasil, 2020\n");
                        break;
                    //Gemeas
                    case 4:
                        printf("Sinopse: Na decada de 80, no Rio de Janeiro, as gemeas identicas Iara e Marilena enganam os homens se passando uma pela a outra. Um dia, Marilena conhece Osmar, o dono de uma escola, por quem se apaixona. Iara tenta seduzir o namorado da irma dando inicio a uma grande rivalidade.\n");
                        printf("Principais Atores: Fernanda Torres, Matheus Nachtergaele, Caio Junqueira\n");
                        printf("Faixa etaria: 14 Anos\n");
                        printf("Diretor: Andrucha Waddington\n");
                        printf("Duracao: 1h 15min\n");
                        printf("Pais e Ano: Brasil, 1999\n");
                        break;
                    //Quando eu era vivo
                    case 5:
                        printf("Sinopse: Apos o divorcio e a demissao do emprego, Junior volta a morar na casa do pai. Ao chegar na casa que um dia ja fora seu lar, ele se sente um estranho e comeca a remoer a separacao e o desemprego. Depois de achar alguns objetos que pertenciam a sua mae, Junior passa a querer saber tudo sobre a historia da familia e desenvolve uma estranha obsessao pelo passado, passando a confundir delirio e realidade.\n");
                        printf("Principais Atores: Marat Descartes, Antonio Fagundes, Sandy\n");
                        printf("Faixa etaria: 12 Anos\n");
                        printf("Diretor: Marco Dutra\n");
                        printf("Duracao: 1h 48min\n");
                        printf("Pais e Ano: Brasil, 2014\n");
                        break;
                    //A Noite Amarela
                    case 6:
                        printf("Sinopse: Um grupo de adolescentes viaja para uma remota ilha do nordeste para comemorar a formatura do ensino medio. As brincadeiras e festas sao gradativamente interrompidas pela sensacao de que o lugar abriga um horror insondavel.\n");
                        printf("Principais Atores: Rana Sui, Ana Rita Gurgel, Felipe Espindola\n");
                        printf("Faixa etaria: 12 Anos\n");
                        printf("Diretor: Ramon Porto Mota\n");
                        printf("Duracao: 1h 42min\n");
                        printf("Pais e Ano: Brasil, 2019\n");
                        break;
                }
            }
            //Estrangeiro Adulto
            else if(nacionalidade == 2 && idade>14)
            {
                printf ("Escolha o filme:\n");
                printf ("1 - Host\n");
                printf ("2 - Invocacao do Mal 1\n");
                printf ("3 - A Freira\n");
                printf ("4 - A Morte Te Da Parabens\n");
                printf ("5 - O Poco\n");
                printf ("6 - Parasita\n");
                scanf ("%d", &filme);
                switch(filme)
                {
                    //Host
                    case 1:
                        printf("Sinopse: Grupo de amigos contrata um medium para fazer uma sessao por Zoom na quarentena. As coisas pareciam bem, ate que um espirito maligno comeca a invadir suas casas e eles percebem que podem nao sobreviver a noite\n");
                        printf("Principais Atores: Haley Bishop, Emma Louise Webb, Jemma Moore, Radina Drandova, Caroline Ward, James Swanton, Seylan Baxter, Emma Wu Ying-chieh, Jinny Lofthouse, Patrick Ward, Alan Emrys,Edward Linard\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Rob Savage\n");
                        printf("Duracao: 1h 5min\n");
                        printf("Pais e Ano: Europa, 2020\n");
                        break;
                    //Invoca??o do mal 1
                    case 2:
                        printf("Sinopse: Os investigadores paranormais Ed e Lorraine Warren trabalham para ajudar a familia aterrorizada por uma entidade demoniaca em sua fazenda\n");
                        printf("Principais Atores: Vera Farmiga, Patrick Wilson,Shannon Kook, Sterling Jerins, Lili Taylor, Lorraine Warren\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: James Wan\n");
                        printf("Duracao: 1h 52 min\n");
                        printf("Pais e Ano: Estados Unidos, 2013\n");
                        break;
                    //A freira
                    case 3:
                        printf("Sinopse: Presa em um convento na Romenia, uma freira comete suicidio. Para investigar o caso, o Vaticano envia um padre assombrado e uma novica prestes a se tornar freira. Arriscando suas vidas, a fe e ate suas almas, os dois descobrem um segredo profano e se confrontam com uma forca do mal que toma a forma de uma freira demoniaca e transforma o convento em um campo de batalha\n");
                        printf("Principais Atores: Taissa Farmiga, Demian Bichir, Bonnie Aarons, Vera Farmiga\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Corin Hardy\n");
                        printf("Duracao: 1h 36min\n");
                        printf("Pais e Ano: Potugal, 2018\n");
                        break;
                    //A morte te d? parab?ns 1
                    case 4:
                        printf("Sinopse: A estudante universitaria Tree Gelbman maltrata as pessoas e nao parece estar muito disposta a atender as ligacoes do pai no seu aniversario. No fim do mesmo dia, no entanto, ela e brutalmente assassinada por um mascarado. Acontece que ela sobrevive, ou melhor, acorda no mesmo e fatidico dia, em uma especie de looping macabro que termina sempre com a morte da garota. Reviver este dia da a Tree a chance de investigar quem e o seu assassino.\n");
                        printf("Principais Atores:Jessica Rothe, Israel Broussard, Rudy Monie, Charles Aiketen, Jason Bayle, Rachel Matthews, Rob Mello, Billy Slaughter\n");
                        printf("Faixa etaria: 14 anos\n");
                        printf("Diretor: Christopher B. Landon\n");
                        printf("Duracao: 1h 36min\n");
                        printf("Pais e ano: Estados Unidos, 2017\n");
                        break;
                    //O Po?o
                    case 5:
                        printf("Sinopse:Em uma prisao onde os detentos sao alimentados por uma plataforma descendente, os que estao nos niveis mais altos comem mais do que precisam enquanto os dos andares mais baixos ficam com as migalhas. Ate que um homem decide mudar o sistema.\n");
                        printf("Principais Atores: Ivan Massague, Zorion Eguileor, Emilio Buale, Alexandra Masagkay\n");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Galder Gaztelu-Urrutia\n");
                        printf("Duracao:1h 28min\n");
                        printf("Pais e ano:Espanha, 2019\n");
                        break;
                    //Parasita
                    case 6:
                        printf("Sinopse: Toda a fam?lia de Ki-taek est? desempregada, vivendo em um por?o sujo e apertado, mas uma obra do acaso faz com que ele comece a dar aulas de ingl?s a uma garota de fam?lia rica. Fascinados com a vida luxuosa destas pessoas, pai, m?e e filhos bolam um plano para se infiltrarem tamb?m na fam?lia burguesa, um a um. No entanto, os segredos e mentiras necess?rios ? ascens?o social custam caro a todos.\n");
                        printf("Principais Atores: Cho Yeo-jeong, Park So-dam, Choi Woo-shik, Song Kang-ho, Jung Yi-Seo\n ");
                        printf("Faixa etaria: 16 anos\n");
                        printf("Diretor: Bong Joon-ho\n");
                        printf("Duracao:2h 12min\n");
                        printf("Pais e ano: Coreia do Sul, 2019\n");
                        break;
                    }
                }
                //Estrangeiro Crian?a
            else if (nacionalidade == 2 && idade<=14)
            {
                printf("Escolha o Filme:\n");
                printf("1 - Caroline\n");
                printf("2 - A Casa Monstro\n");
                printf("3 - O Estranho Mundo de Jack\n");
                printf("4 - Abracadabra\n");
                printf("5 - A Noiva Cadaver\n");
                printf("6 - Frankenweenie\n");
                scanf("%d",&filme);
                switch(filme)
                {
                //Caroline
                case 1:
                    printf("Sinopse: Enquanto explora sua nova casa a noite, a pequena Coraline descobre uma porta secreta que contem um mundo parecido com o dela, porem melhor em muitas maneiras. Todos tem botoes no lugar dos olhos, os pais sao carinhosos e os sonhos de Coraline viram realidade por la. Ela se encanta com essa descoberta, mas logo percebe que segredos estranhos estao em acao: uma outra mae e o resto de sua familia tentam mante-la eternamente nesse mundo paralelo.\n");
                    printf("Principais Atores: Ter Hatcher, Robert Bailey Jr., Dakota Fanning e Ian McShaine.\n");
                    printf("Faixa etaria: 10 anos\n");
                    printf("Diretor: Henry Selick\n");
                    printf("Duracao: 1h 40min\n");
                    printf("Pais e Ano: Estados Unidos, 2009\n");
                    break;
                //A Casa Monstro
                case 2:
                    printf("Sinopse: Nenhum adulto acredita quando tres adolescentes falam que existe uma casa no bairro que e uma criatura perigosa. Com o Dia das Bruxas se aproximando, eles tem que descobrir uma forma de destruir a casa antes que ela fa?a mal a criancas inocentes.\n");
                    printf("Principais Atores: steve Buscemi, Sam Lerner, Kathleen Turner, Jason Lee.\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretor: Gil Kenan\n");
                    printf("Duracao: 1h 31min\n");
                    printf("Pais e Ano: Estados Unidos, 2006\n");
                    break;
                //O Estranho Mundo De Jack
                case 3:
                    printf("Sinopse: Jack Skellington, o Rei das Aboboras, se cansa de fazer o Dia das Bruxas todos os anos e deixa os limites da cidade. Por acaso, acaba atravessando o portal do Natal, onde ve a alegria do espirito natalino. Ao retornar para a Cidade do Halloween, sem ter compreendido o que viu, ele come?a a convencer os cidadaos a sequestrarem o Papai Noel e fazerem seu proprio Natal. Apesar de sua leal namorada Sally ser contra, o Papai Noel e capturado e os fatos mostrarao que Sally estava certa o tempo todo.\n");
                    printf("Principais Atores: Danny Elfman, Chris sarandon, Ken Page, Willian hickey, Ctherine, O?Hara\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretor: Henry Selick\n");
                    printf("Duracao: 1h 16min\n");
                    printf("Pais e Ano: Estados Unidos, 1993\n");
                    break;
                //Abracadabra
                case 4:
                    printf("Sinopse: Apos se mudar para Salem, Massachusetts, o adolescente Max Dennison explora uma casa abandonada com sua irma Dani e sua nova amiga Allison. Depois de nao acreditar em uma historia que Allison conta, Max acidentalmente liberta um grupo de bruxas mas que morava na casa. Agora, com a ajuda de um gato magico, as criancas devem roubar o livro de magias das bruxas para impedi-las de se tornarem imortais.\n");
                    printf("Principais Atores: Bette Midler, Kathy Najimy, Sarah Jessica Parker, Omri Katz, Thora Birch, Vinessa Shaw\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretor: Kenny Ortega\n");
                    printf("Duracao: 1h 36min\n");
                    printf("Pais e Ano: Estados Unidos, 1993\n");
                    break;
                //A Noiva Cadaver
                case 5:
                    printf("Sinopse: As familias de Victor e Victoria estao arranjando seu casamento. Nervoso com a cerimonia, Victor vai sozinho a floresta para ensaiar seus votos. No entanto, o que ele pensava ser um tronco de arvore na verdade e o bra?o esqueletico de Emily, uma noiva que foi assassinada depois de fugir com seu amor. Convencida que Victor acabara de lhe pedir a mao em casamento, Emily o leva para o mundo dos mortos, mas ele precisa retornar rapidamente antes que Victoria se case com o malvado Lorde Barkis.\n");
                    printf("Principais Atores: Johnny Depp, Emily Watson, Helena Boham Carter, Richerd E.Grant.\n");
                    printf("Faixa etaria: Livre\n");
                    printf("Diretores: Tim Burton, \n");
                    printf("Duracao:  1h 18min\n");
                    printf("Pais e Ano: Estados Unidos, 2005\n");
                    break;
                //Frankenweenie
                case 6:
                    printf("Sinopse: Victor adora fazer filmes caseiros de terror, quase sempre estrelados por seu cachorro Sparky. Quando o cao morre atropelado, o garoto fica triste e inconformado. Inspirado por uma aula de ciencias que teve na escola, onde um professor mostra ser possivel estimular os movimentos atraves da eletricidade, ele constroi uma maquina que permita reviver Sparky. O experimento da certo, mas o que Victor nao esperava era que seu melhor amigo voltasse com habitos um pouco diferentes.\n");
                    printf("Principais Atores: Cherlie Tahan, Catherine O?Hara, Winona Ryder, James Hiroyuki\n");
                    printf("Faixa etaria: 10 anos\n");
                    printf("Diretor: Tim Burton\n");
                    printf("Duracao: 1h 27min\n");
                    printf("Pais e Ano: Estados Unidos, 2012\n");
                    break;
                }
            }
                break;
    }
}
