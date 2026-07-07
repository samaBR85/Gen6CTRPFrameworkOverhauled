# Gen6CTRPluginFrameworkOverhauled — v0.7.7

[English](README.md) · **Português**

[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/E5N7227AO5)

Uma caixinha de superpoderes para **Pokémon X, Y, Omega Ruby e Alpha Sapphire** no Nintendo 3DS.

## O que é isto?

É um plugin `.3gx` que você coloca no seu 3DS e que adiciona um menu por cima do jogo de Pokémon — gerar qualquer
Pokémon, comprar em qualquer lugar, editar seu time, ler o adversário no meio da batalha, jogar alguns mini-jogos, e
cem pequenas conveniências no meio do caminho.

O pulo do gato: **foi feito pra ser entendido.** Cada recurso tem nome em linguagem simples, cada opção tem um botão
de info que explica o que faz, e existe um guia de 23 páginas *dentro* do plugin que te conduz por tudo. Se você ama
esses jogos mas nunca mexeu com homebrew, é exatamente pra você. Os menus estão em **7 idiomas**.

Você abre tudo com **SELECT**, e o menu aparece por cima do jogo:

<p align="center">
  <img src="Screenshots/v0.7.0/home_v070.png" width="330" alt="O menu do plugin sobre Pokémon Alpha Sapphire — lista de recursos em cima, botões embaixo" />
</p>

> 🎯 **Funciona nos quatro jogos Gen 6.** X, Y, Omega Ruby e Alpha Sapphire têm conteúdo dedicado (guias + assets) na própria pasta de Title ID, e o mesmo `.3gx` detecta automaticamente qual jogo você está rodando.

> 🌐 **Disponível em 7 idiomas**, alternáveis no plugin: 🇺🇸 Inglês · 🇫🇷 Francês · 🇩🇪 Alemão · 🇮🇹 Italiano · 🇯🇵 Japonês · 🇧🇷 Português (Brasil) · 🇪🇸 Espanhol.

## Feito por um jogador curioso, com o Claude

Vou ser franco: **não sou programador.** Sou um jogador curioso — alguém bom em testar, cutucar as coisas e pensar
bastante num problema e em como resolvê-lo. Cada recurso aqui foi construído em bate-bola com o Claude, e não tenho a
menor vergonha de dizer: foi exatamente essa colaboração que me deixou *materializar* as coisas que eu vivia
desejando que existissem enquanto jogava.

Porque é daí que tudo isto veio — **necessidades reais, descobertas jogando.** Eu estava no meio de uma run, batia
numa fricção e pensava "tinha que ter um jeito de…", e aí a gente ia construir. Aos poucos despejei um pouco da minha
personalidade em cada recurso conforme ele tomava forma. **Parabéns aos criadores** de tudo em que isto se apoia —
estar sobre os ombros de gigantes não é exagero aqui (veja os [Créditos](#-créditos)).

## Um passeio guiado

Aqui vai o plugin mais ou menos na ordem em que você o encontraria. Nada abaixo é leitura obrigatória — é só um
passeio amigável pelos cômodos.

### Tudo começa com um botão

Aperte **SELECT** e o menu abre por cima do jogo. Mova com o **D-Pad**, escolha com **A**, volte com **B**. A tela de
toque de baixo tem os botões grandes — **Favoritos**, **Busca**, o **Game Guide** e o **App Guide**, **ActionReplay**
e **Tools**. Destaque qualquer coisa e aperte **X** pra ver a nota de info, ou **Y** pra fixar nos Favoritos. Essa é
a língua inteira do menu.

### Gere e capture qualquer Pokémon

O **Wild Pokémon Spawner** é uma lista filtrada ao vivo de todas as espécies. A tela de cima mostra os resultados; a
de baixo é um hub de filtros — refine por nome, número da Dex, geração, tipo ou pelo que você já tem.

<p align="center">
  <img src="Screenshots/v0.3.3/export/02_spawner_finder.png" width="330" alt="Wild Pokémon Spawner — resultados em cima, filtros embaixo" />
  <img src="Screenshots/v0.3.3/export/03_spawner_filtered.png" width="330" alt="Spawner filtrado só pros tipo Fogo da 6ª geração" />
</p>

Abra qualquer resultado pra ver a ficha completa — sprite, tipos, habilidades (incluindo a Oculta), stats base e os
quatro golpes que ele sabe no seu nível — então defina forma, nível e Normal/Shiny e gere-o na grama.

<p align="center">
  <img src="Screenshots/v0.3.3/export/04_spawner_detail.png" width="330" alt="Ficha do Pyroar com stats e ajustes de spawn" />
  <img src="Screenshots/v0.3.3/export/05_respawn_legendary.png" width="330" alt="Respawn Legendary — escolha um lendário e mande-o de volta pro lugar dele" />
</p>

Derrubou um lendário, ou viu um fugir? O **Respawn Legendary** lista todos com a localização real e manda o que você
escolher de volta pro lugar onde você o encontrou.

### Carregue um Poké Mart na bag

O **PokéMart Anywhere** transforma o "adicionar item" numa loja de verdade. Escolha um modo: **FREE** adiciona
qualquer coisa, qualquer quantidade, de graça — ou **PAY**, um Poké Mart real onde a lista filtra pro que você
realmente compra e cada item custa o seu dinheiro.

<p align="center">
  <img src="Screenshots/v0.3.3/export/06_pokemart_modes.png" width="330" alt="PokéMart Anywhere — escolhendo FREE ou PAY" />
  <img src="Screenshots/v0.3.3/export/07_pokemart_pay.png" width="330" alt="Modo PAY mostrando os itens com preços" />
</p>

Compre na hora, ou monte um **carrinho** e revise tudo no **Checkout** antes de pagar — nunca dá pra gastar a mais. E
ordene a lista inteira por nome, preço, tipo ou quantos você tem.

<p align="center">
  <img src="Screenshots/v0.3.3/export/08_pokemart_checkout.png" width="330" alt="O carrinho e o checkout, com o total correndo contra o seu dinheiro" />
</p>

### Construa e reconstrua nas suas boxes

O **PC Box ++** é seu armazenamento mostrado como uma grade de sprites, igual ao PC do jogo. Mova com o D-Pad, troque
de box com L/R, e **mova (X)**, **clone (Y)** ou **busque (START)** direto na grade.

<p align="center">
  <img src="Screenshots/v0.3.3/export/09_pcbox_grid.png" width="330" alt="Grade visual do PC Box ++ com a carta do Pokémon selecionado embaixo" />
  <img src="Screenshots/v0.3.3/export/10_pcbox_editor.png" width="330" alt="O editor por abas — Main, Stats, Moves, Origins, Misc" />
</p>

Aperte **A** pra abrir o editor, onde os detalhes se dividem em abas — Main, Stats, Moves, Origins, Misc. Cada campo
(espécie, IVs/EVs, golpes, habilidade, item, Poké Ball e mais) é escolhido numa lista visual — sem digitar, sem
teclado.

<p align="center">
  <img src="Screenshots/v0.3.3/export/11_pcbox_movepicker.png" width="330" alt="Escolhendo um golpe numa lista buscável e filtrada por tipo" />
</p>

O mesmo editor agora alcança a sua **Equipe**, não só as boxes do PC — três abas no topo alternam entre **PC
Box**, **Party** (os seus seis, em sprites grandes) e **Swap**. Abra qualquer Pokémon da equipe e você tem o
mesmíssimo editor em abas das boxes — Main, Stats, Moves, Origins, Misc — e editar ele muda de verdade no jogo e
permanece depois que você salva.

<p align="center">
  <img src="Screenshots/v0.7.6/PC_BOX_party.png" width="330" alt="PC Box ++ — a aba Party, os seus seis em sprites grandes" />
  <img src="Screenshots/v0.7.6/PC_BOX_part_edit.png" width="330" alt="PC Box ++ — o editor completo em abas aberto num Pokémon da equipe (Edit - Party slot 4)" />
</p>

O **Swap** é uma troca em dois passos: escolha um Pokémon, depois escolha com quem ele troca de lugar —
Box↔Party ou o contrário. A janela inteira fica roxa enquanto você está no Swap pra você nunca esquecer em que
modo está.

<p align="center">
  <img src="Screenshots/v0.7.6/PC_BOX_swap.png" width="330" alt="PC Box ++ — modo Swap, moldura roxa, escolhendo dois Pokémon pra trocar de lugar" />
</p>

### Conheça seu time num relance

O **View Party Summary** dispõe seu time como cartas com os números reais e ocultos — stats, IVs, EVs, nature,
habilidade, item e golpes. Deslize um seletor sobre um stat e aperte **A** pra pular pro companheiro com o valor mais
alto (ou mais baixo); marquinhas ▲/▼ sinalizam o melhor e o pior do seu time.

<p align="center">
  <img src="Screenshots/v0.3.3/export/12_party_card.png" width="330" alt="Carta de um membro do time com stats, nature, habilidade e golpes" />
</p>

O **Team Coverage** lista os tipos do seu time inteiro num relance, depois mostra a sinergia real: quais tipos de
ataque ameaçam dois ou mais companheiros ao mesmo tempo, quem leva um golpe de 4x cheio, e quais tipos seus
próprios golpes não conseguem furar — em frases diretas, não numa tabela de números.

<p align="center">
  <img src="Screenshots/v0.7.3/team_coverage.png" width="330" alt="Team Coverage — tipos do time num relance, mais fraquezas compartilhadas e pontos cegos" />
</p>

O **Nature / IV / EV Advisor** é 3 checagens numa tela só (L/R alterna): **Nature** sinaliza uma natureza
que baixa o status que o Pokémon realmente usa pra atacar (ou Velocidade, que importa de qualquer jeito),
**IV** sinaliza IVs baixas nos status que ele realmente usa, e **EV** sinaliza investimento de EV que não
bate com os golpes reais — EVs em Ataque Especial num bicho que só tem golpes Físicos, por exemplo. O
**Held Item Advisor** mostra o que seu time está segurando agora e sugere um item pra quem tá de mãos
vazias, dividido entre o que você já tem (**No Baú**) e o que precisa conseguir (**A Conseguir**, com um
botão de Carrinho Sugerido direto pro PokéMart Anywhere).

<p align="center">
  <img src="Screenshots/v0.7.5/nature_iv_ev_advisor.png" width="330" alt="Nature / IV / EV Advisor — 3 checagens contra os golpes reais do Pokemon, numa tela so" />
  <img src="Screenshots/v0.7.4/held_item_advisor.png" width="330" alt="Held Item Advisor — sugestoes de item dividas entre No Bau e A Conseguir" />
</p>

**Breeding Compatibility** (na pasta Breeding) confere pares de Creche pra você: **Party** e **Boxes**
escaneiam o que você já tem procurando pares compatíveis (mesmo grupo de ovo, ou um dos dois é Ditto) e
mostram os golpes de ovo que o filhote poderia herdar dos golpes atuais de um dos pais, ordenados pra
mostrar os úteis primeiro — com um filtro por grupo de ovo (**Y**) quando a lista fica grande. **Check Two**
deixa você testar qualquer par de espécies com o Seletor de Espécies visual, mesmo umas que você ainda não
tem, mostrando os dois pais e o que realmente nasce lado a lado.

<p align="center">
  <img src="Screenshots/v0.7.5/breeding_compat_boxes.png" width="330" alt="Breeding Compatibility — aba Boxes, pares compativeis ordenados por golpes de ovo herdaveis" />
  <img src="Screenshots/v0.7.5/breeding_compat_checktwo.png" width="330" alt="Breeding Compatibility — Check Two, duas especies e o que nasce entre elas" />
</p>

**Limite de Nível** é uma ajuda pra runs nuzlocke/hardcore: define um limite de nível a partir do **ás do
próximo Líder de Ginásio** (lido ao vivo das suas insígnias) mais um ajuste que você escolhe, então ele
sobe sozinho conforme você ganha insígnias — nada pra reconfigurar entre sessões. A sua equipe é listada
contra o limite, com quem passar sinalizado; **D-Pad Cima/Baixo** percorre os próximos ginásios pra
comparar como a sua equipe fica mais adiante. Alterne entre **Avisar** (só sinaliza) e **Forçar** (um
botão puxa os Pokémon acima do limite de volta pra ele, recalculando os atributos), ou desligue (**Off**)
pra pós-jogo — e um campo no HUD ao vivo pode mostrar a contagem de quem passou do limite enquanto você
joga.

<p align="center">
  <img src="Screenshots/v0.7.7/level_cap.png" width="330" alt="Limite de Nível — a equipe contra o ás do próximo ginásio, e o gerenciador Avisar/Forçar" />
</p>

### Vença a batalha

As **In-Battle Tools** são o que você usa no meio da luta. O **Enemy Helper** é uma carta de treinador pro inimigo —
explica a habilidade, o item e os golpes dele, lista os tipos que o vencem, e compara os seis stats dele com o seu
Pokémon ativo (e até diz se você já tem a espécie). A aba **Compare** dele abre direto no **Damage Calc**: uma
faixa de dano estimado e quantos golpes pra nocautear, dos dois lados — nome e golpes de cada um na mesma cor,
pra ficar claro de cara quem é quem. Aperte **Y** pra voltar pra comparação simples de stats.

<p align="center">
  <img src="Screenshots/v0.3.3/export/14_enemy_details.png" width="330" alt="Enemy Helper — os detalhes do inimigo e o item segurado" />
  <img src="Screenshots/v0.7.1/damage_calc.png" width="330" alt="Enemy Helper — Damage Calc, dano estimado e golpes pra nocautear dos dois lados" />
</p>

O **Change Party Stats** é um editor visual do seu próprio time, ali no meio da luta — cure, ajuste HP/PP, status,
item, golpes, ou multiplique a EXP sem nunca sair da batalha. E o **Display Enemy Stats** sobrepõe os dados ocultos
do oponente na tela de cima.

<p align="center">
  <img src="Screenshots/v0.3.3/export/13_party_stats.png" width="330" alt="Change Party Stats — editando seu time no meio da batalha" />
  <img src="Screenshots/v0.3.3/export/16_enemy_overlay.png" width="420" alt="Overlay do Display Enemy Stats lendo o inimigo durante a batalha" />
</p>

### Dê um tempo — o Mini Game Corner

Quando você quer só jogar, tem um fliperama de sete jogos. Escolha um na grade; a tela de baixo tem um interruptor
**FREE / PAY** (FREE você fica com o que ganha, seu dinheiro nunca muda; PAY coloca Pokédólares de verdade em jogo).

<p align="center">
  <img src="Screenshots/v0.3.3/export/17_mini_hub.png" width="330" alt="O hub do Mini Game Corner com sete tiles de jogos" />
  <img src="Screenshots/v0.3.3/export/18_mini_toptrumps.png" width="330" alt="Top Trumps — um duelo de stats, vencido" />
</p>

Abra loot boxes, gire uma roleta de prêmios, puxe os slots, aposte num duelo de stats, chute maior-ou-menor, role um
desafiante selvagem pro seu próximo encontro, ou gere um time aleatório inteiro numa box vazia.

<p align="center">
  <img src="Screenshots/v0.3.3/export/19_mini_lootbox.png" width="250" alt="Revelação de prêmio do Loot Box" />
  <img src="Screenshots/v0.3.3/export/20_mini_wheel.png" width="250" alt="Spin the Wheel acertando um multiplicador alto" />
  <img src="Screenshots/v0.3.3/export/22_mini_teamgen.png" width="250" alt="Team Generator pré-visualizando seis Pokémon aleatórios" />
</p>

### Suavize a jornada longa

As ferramentas de **Overworld & Quality of Life** tiram a dor de uma run longa — texto rápido, andar rápido,
teletransporte, atravessar paredes, ovos instantâneos e mais. E um **HUD** pequeno e configurável pode manter seu
dinheiro, relógio, posição no mapa e o status do líder na tela enquanto você joga.

<p align="center">
  <img src="Screenshots/v0.3.3/export/24_qol_movement.png" width="330" alt="Opções de Movement & Travel" />
  <img src="Screenshots/v0.3.3/export/25_hud_ingame.png" width="330" alt="O HUD sobreposto no overworld" />
</p>

### Viaje pra qualquer lugar

O **Teletransporte** te leva a qualquer cidade, rota ou ponto de referência de Hoenn — e, com um pouco de ensino,
exatamente onde *você* gosta de ficar. Escolha um destino, então **SEGURE L** e entre em qualquer porta pra warpar.
A tela de baixo organiza cada lugar em abas — **All**, **Towns**, **Other** (Caves / Forests / Landmarks / Mirage
Spots, como sub-menus), **Routes** (101–134) e **Map**. **A** teletransporta, **Y** alterna entre a grade de imagens
e uma lista simples, e **X** pula a seleção pra onde você está agora.

<p align="center">
  <img src="Screenshots/v0.4.1/export/teleport_grid.png" width="330" alt="Teletransporte — a grade de locais com as abas e a legenda de botões embaixo" />
  <img src="Screenshots/v0.4.1/export/teleport_routes.png" width="330" alt="A aba Routes — Route 101 com a foto, pronta pra salvar um warp point" />
</p>

Dois botões deixam tudo do seu jeito: fique exatamente onde quer chegar, então **Start = save warp point** (sua tile
de pouso exata — é isso que torna uma **rota** teleportável) ou **ZL = tag area** (ensina o **X** os sub-mapas
escondidos que ele ainda não reconhece). A aba **Map** é um mini-mapa vivo que você *percorre* com o D-Pad — cidade
pra rota pra cidade, igual à jornada de verdade — e apertar **Y** ali troca por um grid com a imagem de *todos* os
lugares (cidades + rotas, sem rótulos), organizado mais ou menos como Hoenn e filtrável pelos chips embaixo (dá pra
marcar mais de um). Tudo que você salva vai pra um **MyTeleport.txt** editável à mão na pasta do plugin, e sobrevive
aos updates.

<p align="center">
  <img src="Screenshots/v0.4.1/export/teleport_map.png" width="330" alt="A aba Map — Oldale Town no centro, suas rotas de ligação como tiles ao redor" />
  <img src="Screenshots/v0.4.1/export/teleport_overview.png" width="330" alt="O overview do Y na aba Map — grid com todos os lugares e chips de filtro embaixo" />
</p>

### Deixe do seu jeito

Vinte e cinco **temas** de cor repaginam a interface inteira — menus, botões, até o teclado do jogo — com uma amostra
de cor ao lado de cada nome e sua escolha lembrada entre as sessões. Fixe os recursos que mais usa nos **Favoritos**
(duas colunas, arraste pra reordenar), e remapeie as teclas do menu em **Tools › Hotkeys**.

<p align="center">
  <img src="Screenshots/v0.3.3/export/26_themes.png" width="330" alt="O seletor de temas com amostras de cor" />
  <img src="Screenshots/v0.3.3/export/27_appguide.png" width="330" alt="O leitor do App Guide embutido" />
</p>

E se você se sentir perdido, o **App Guide** (23 páginas, escrito como uma aventura guiada em vez de um manual) e uma
**nota de info (i) em cada função** estão sempre a um botão de distância.

## 📜 Como cresceu

Uma breve história, do mais antigo ao mais novo — sem detalhe, só o formato dela:

- **v0.2.x** — a grande repaginada de UX: menus reorganizados, Favoritos, avisos (toasts), o HUD e os primeiros temas.
- **v0.3.0** — os localizadores de tela dupla (Wild Pokémon Spawner, Respawn Legendary) e o App Guide.
- **v0.3.1** — **PokéMart Anywhere** (uma loja real na bag com preços, carrinho e checkout) + ordenar a bag.
- **v0.3.2** — capturar a própria UI do plugin nas screenshots; favoritos/cheats/hotkeys sobrevivem a uma atualização.
- **v0.3.3** — **In-Battle Tools** (Enemy Helper, Change Party Stats), o editor visual **PC Box ++**, e o
  **Mini Game Corner**.
- **v0.4.2** — o **Teletransporte** renasceu: um seletor de lugares em duas telas com um **Map** navegável e um
  grid-overview de todos os lugares, seus próprios **warp points** salvos (o `MyTeleport.txt` editável à mão), e as
  pastas do plugin organizadas em **Assets/**.
- **v0.5.0** — **multi-jogo**: conteúdo dedicado para os quatro títulos Gen 6 (X, Y, Omega Ruby, Alpha Sapphire), um mapa de teleporte completo de Kalos, e a UI em **7 idiomas**.
- **v0.6.0** — o **O-Power Center**: um painel visual de todos os 18 O-Powers e do medidor de cargas (Refill com um toque, Max All, e um toggle Keep pra não esperar recarga).
- **v0.6.1** — **RNG Tracking**: leia o RNG do jogo ao vivo no HUD (TSV, current seed, frame, egg seed) pra shiny hunting e RNG abuse — além de novos campos de HUD (item segurado, encontros, passos da sessão), **Max DexNav Search Lv.**, **Health & Mana**, e o **Language** movido pra Tools.
- **v0.6.2** — **RNG Tracking++**: a **initial seed** agora é capturada ao vivo no console (pro 3DSRNGTool realmente prever seus shinies), o **frame** é a contagem absoluta de advances, um contador **Target frame** com dica de paridade acerta o timing, um toggle **Freeze** segura o HUD inteiro pra copiar os valores, o RNG de selvagem **TinyMT** (estado + advances) aparece no formato copy‑ready `[3][2]/[1][0]`, e mais o **TRV** — tudo num layout estilo PokeReader.
- **v0.6.3** — **Ajustes no HUD**: o campo mal nomeado "Clock" virou **Time Played**, com dois campos novos no HUD — **In-Game Time** (a fase de dia/noite do jogo pelo relógio do 3DS, ex. `14:15 - Day`) e **Real Time** (o relógio do console) — e o campo **Party count** agora mostra o tamanho real da sua equipe.
- **v0.6.4** — **Hunter's Update**: um **Trainer Card** com seu OT/TID, dinheiro, Time Played, sprites da party e suas **insígnias de ginásio reais lidas ao vivo do save**; o **Egg Peek** pra revelar o conteúdo de um ovo mascarado (`?`) sem chocá‑lo (e ovos criados no PC Box ++ agora ganham uma data/local de recebimento reais); e um **Shiny Hunt Companion** que conta seus encontros de uma espécie‑alvo e avisa + pausa quando um shiny real aparece.
- **v0.6.5** — **Living Dex Dashboard**: um painel de coleção somente‑leitura para as 721 espécies — possuídas, shiny e faltantes — filtrável por **Tipo**, **Geração** e **Categoria**, com exportação pra uma lista `LivingDex.txt` de faltantes e um card completo da espécie a um toque; além de uma grade do **PC Box ++** mais limpa e arejada.
- **v0.7.0** — **Champion's Update**: o **Gym Coach** mostra com antecedência o time do próximo Líder de Ginásio, membro da Elite dos Quatro ou Campeão do jogo que você está jogando — um veredito de vantagem de tipo contra o seu time, um card completo por Pokémon, e um **Carrinho Sugerido** que abre o PokéMart Anywhere já montado pra aquela luta específica.
- **v0.7.1** — **Damage Calc**: a aba Compare do Enemy Helper agora abre direto numa faixa de dano estimado e golpes pra nocautear dos dois lados, com nome e golpes de cada um na mesma cor pra ficar claro quem é quem — aperte **Y** pra ver a comparação simples de stats.
- **v0.7.2** — o **Gym Coach** agora lê suas insígnias de ginásio reais e já pula direto pro seu próximo desafio na primeira vez que você abre a tela em cada sessão, com uma marca **Next** na lista pra você sempre saber quem é.
- **v0.7.3** — **Team Coverage**: uma nova tela em Trainer Info que lista os tipos do seu time num relance, mais um detalhamento Defense/Offense de fraquezas compartilhadas, golpes 4x e pontos cegos que seus próprios golpes não furam.
- **v0.7.4** — **EV Advisor** e **Held Item Advisor**, mais duas telas em Trainer Info: uma sinaliza EVs que não batem com os golpes reais do seu Pokémon, a outra sugere itens pra segurar (dividido em No Baú / A Conseguir) — e o Team Coverage ganhou uma 3ª aba **Cart** com uma lista de compras geral pro time.
- **v0.7.5** — o EV Advisor virou **Nature / IV / EV Advisor** (3 checagens, uma tela), e uma nova tela **Breeding Compatibility** (Party / Boxes / Check Two) acha pares de Creche, os golpes de ovo que eles poderiam passar, e deixa você testar qualquer par de espécies antes mesmo de ter os dois.
- **v0.7.6** — o **PC Box ++** agora edita a sua **Equipe**, não só as boxes do PC (mesmo editor visual), e ganhou uma aba **Swap** pra trocar um Pokémon entre Box e Party em dois toques. Por baixo dos panos isso conserta a edição da equipe de verdade — mudanças em Pokémon da equipe agora surtem efeito no jogo e permanecem no save.
- **v0.7.7** — **Limite de Nível**, uma nova tela no Trainer Info pra runs nuzlocke/hardcore: um limite de nível automático atrelado ao ás do próximo Líder de Ginásio (+ um ajuste seu), modos Avisar ou Forçar, um navegador via D-Pad pra comparar os próximos ginásios, e um campo no HUD ao vivo pra contagem de quem passou do limite.

## 📥 Instalando

> 💻 **Também funciona no emulador Azahar** (o sucessor ativo do Citra) — desktop **e** Android. Veja a seção [No Azahar](#no-azahar-emuladores) abaixo.

### ⚡ Mais fácil: instalar e atualizar pelo Universal-Updater (QR Code)

Se você tem o [Universal-Updater](https://github.com/Universal-Team/Universal-Updater) no seu 3DS, dá pra instalar
**e** manter o plugin atualizado sem PC:

<p align="center">
  <img src="unistore/gen6ctrpf-qr.png" width="160" alt="QR Code da UniStore do Universal-Updater" />
</p>

1. Abra o **Universal-Updater** → toque na **engrenagem (Configurações)** → **Select UniStore** → **+** → **Escanear QR Code** e aponte pro código acima.
2. Abra o item **Gen6 CTRPF Overhauled** → rode **Download (latest)**.
3. Ele baixa o release mais recente (~90 MB) e extrai tudo na raiz do SD automaticamente — os quatro jogos + o pacote de idiomas. Pronto.

Rode **Download (latest)** quando quiser pra pegar a versão mais nova. *(Só hardware 3DS — o Universal-Updater não existe em emuladores; pro Azahar, use os passos manuais abaixo.)*

### Instalação manual

1. Atualize para o [Luma3DS](https://github.com/LumaTeam/Luma3DS/releases/latest) mais recente.
2. Baixe a [versão](https://github.com/samaBR85/Gen6CTRPFrameworkOverhauled/releases/latest) mais recente.
3. Extraia o `.zip` na **raiz do seu cartão SD**, mantendo a estrutura de pastas. Ele adiciona duas pastas:
   - `luma/` — o plugin, com uma pasta por jogo: `luma/plugins/0004000000055D00/` (X), `0004000000055E00/` (Y), `000400000011C400/` (Omega Ruby), `000400000011C500/` (Alpha Sapphire). O mesmo `Gen6CTRPluginFramework.3gx` (junto do App Guide e Game Guide embutidos) fica em cada uma; ele detecta seu jogo automaticamente.
   - `Gen6CTRPluginFramework/` — os dados do plugin, incluindo os **arquivos de idioma** (Inglês, Francês, Alemão, Italiano, Japonês, Português (Brasil), Espanhol — 7 idiomas). **Essa pasta fica na raiz do SD, ao lado de `luma/` — *não* dentro dela.** O plugin carrega o idioma daqui, então não pule essa pasta. (Seus `Theme.txt` e `HUD.txt` são criados nessa pasta automaticamente no primeiro uso.)
4. Garanta que `Gen6CTRPluginFramework.3gx` seja o único arquivo `.3gx` do título.
5. Abra o menu do Rosalina (`L+Down+Select`) e deixe o **Plugin Loader** em **[ENABLED]**.
6. Inicie seu jogo Gen 6 — o Luma3DS carrega o plugin na inicialização. Pressione **Select** no jogo pra abrir o menu, e então abra o **App Guide**.

> **Nota:** O pacote de idioma precisa ficar dentro da pasta `Gen6CTRPluginFramework` na **raiz do SD**. Garanta que o caminho seja exatamente:
> `SD:/Gen6CTRPluginFramework/Language/<Idioma>.txt`
> (por exemplo `SD:/Gen6CTRPluginFramework/Language/English.txt`).

### No Azahar (emuladores)

O [Azahar](https://azahar-emu.org/) é o sucessor ativo do Citra (descontinuado em 2024), disponível em Windows, macOS, Linux **e Android**. Ele herda o suporte a plugins 3GX do Citra, então o mesmo plugin roda nele usando a mesma estrutura de pastas do Luma3DS. Os passos 1–2 são idênticos (baixar e extrair). Depois:

**Desktop (Windows / macOS / Linux):**

1. Abra o Azahar e vá em **File → Open Azahar Folder** para localizar o diretório do usuário.
2. Copie as pastas `luma/` e `Gen6CTRPluginFramework/` extraídas para dentro da subpasta `sdmc/` desse diretório.
3. No Azahar: **Emulation → Configure → System → Enable 3GX plugin loader**.
4. Inicie seu jogo Gen 6 — sem precisar do Rosalina, o plugin carrega automaticamente. Pressione **Select** para abrir o menu.

**Android:**

1. Instale o Azahar pela Play Store (ou o APK do GitHub) e abra uma vez pra ele criar as pastas.
2. Abra a pasta `sdmc` — no app: **Settings → Storage → Open** ao lado de *SDMC Directory* (fica em `/storage/emulated/0/Azahar/sdmc/`).
3. Copie as pastas `luma/` e `Gen6CTRPluginFramework/` extraídas para dentro dessa pasta `sdmc/`.
4. Ative o **3GX plugin loader** nas configurações de **System** do Azahar.
5. Inicie seu jogo Gen 6 e pressione **Select** para abrir o menu.

> ✅ Confirmado pela comunidade funcionando no Azahar (Android) tanto em **Omega Ruby / Alpha Sapphire** quanto em **X / Y**. Se um jogo não abrir com o loader ligado, atualize o Azahar pra versão mais nova ou desligue e ligue o loader. (Versões antigas do Citra usam os mesmos caminhos de menu.)

## 🔧 Compilando
1. Requer o `devkitPro`.
2. Abra `C:/devkitPro/msys2` e rode `msys2_shell.bat`.
3. Adicione os repositórios ThePixellizerOSS (cole e rode):
   ```sh
   if ! grep -Fxq "[thepixellizeross-lib]" /etc/pacman.conf; then echo -e "\n[thepixellizeross-lib]\nServer = https://thepixellizeross.gitlab.io/packages/any\nSigLevel = Optional" | tee -a /etc/pacman.conf > /dev/null; fi; if ! grep -Fxq "[thepixellizeross-win]" /etc/pacman.conf; then echo -e "\n[thepixellizeross-win]\nServer = https://thepixellizeross.gitlab.io/packages/x86_64/win\nSigLevel = Optional" | tee -a /etc/pacman.conf > /dev/null; fi
   ```
4. Rode `pacman -Sy` e confirme que os bancos ThePixellizerOSS aparecem.
5. Rode `Release.bat` na pasta do plugin.

## 🙏 Créditos

Este projeto se apoia numa longa linha de trabalho voluntário — do primeiríssimo ancestral até este fork — e
**cada pedacinho merece reconhecimento.** Sem o esforço doado livremente por esta comunidade, nada disto existiria.

**A linhagem do plugin**
- **Baseado em** [Gen 6 CTRPluginFramework](https://github.com/biometrix76/Gen6CTRPluginFramework) por
  [biometrix76](https://github.com/biometrix76) — construído sobre o
  [Alolan CTRPluginFramework](https://github.com/biometrix76/alolanctrpluginframework/releases/latest)
  e uma continuação do abandonado
  [Multi-Pokémon Framework](https://github.com/semaj14/Multi-PokemonFramework) e
  [seus contribuidores](https://github.com/semaj14/Multi-PokemonFramework/blob/main/Credits.md).

**Fundações & ferramentas** (preservadas do upstream)
- [ThePixellizerOSS](https://gitlab.com/thepixellizeross) et al. — o 3gxtool e o CTRPluginFramework usados pra compilar plugins
- [PKHeX](https://github.com/kwsch/PKHeX/) (kwsch) et al. — banco de dados, documentação, exemplos e código
- [AnalogMan151](https://github.com/AnalogMan151) — a base ultraSuMoFramework do Alolan CTRPluginFramework
- [dragonfyre173](https://github.com/dragonfyre173) — o overlay de visualização de dados em jogo
- [JourneyOver](https://github.com/JourneyOver) et al. — o extenso [banco de códigos ActionReplay](https://github.com/JourneyOver/CTRPF-AR-CHEAT-CODES)
- [Alexander Hartmann](https://github.com/Hartie95) — a base de XY & ORAS deste plugin
- [3DSRNGTool](https://github.com/wwwwwwzx/3DSRNGTool) (wwwwwwzx) e [PokeReader](https://github.com/zaksabeast/PokeReader) (zaksabeast) — as referências de RNG de Gen 6 por trás do **RNG Tracking** (leitura ao vivo de seed / frame / TID·SID e a técnica de captura da initial seed)

**Fontes de imagem & dados** (para o Spawner, o localizador de itens e os dados da Pokédex)
- **Sprites de Pokémon** — os sprites do Spawner e os ícones de Lendários são reduzidos do conjunto de sprites X/Y do
  [Pokémon Database](https://pokemondb.net).
- **Ícones de itens / TM / HM** — do repositório [PokéAPI sprites](https://github.com/PokeAPI/sprites).
- **Dados de Pokédex, tipo, habilidade & golpe** — [Pokémon Showdown](https://github.com/smogon/pokemon-showdown) e
  [PokéAPI](https://pokeapi.co); **nomes de itens** do [PKHeX](https://github.com/kwsch/PKHeX/) (kwsch).
- **Imagens de Locations & Routes** — as miniaturas de mapa/rota do Teleport e os dados de conexão de áreas vêm da
  [ORAS Wiki](https://oraswiki.com/locations/).
- **Imagens de locais de Kalos (X/Y)** — da [Bulbapedia](https://bulbapedia.bulbagarden.net/).
- Todas as imagens e nomes de Pokémon são **© Nintendo / Game Freak / The Pokémon Company.** Esses espelhos da
  comunidade são usados apenas pra construir esta ferramenta de fã, gratuita e não comercial.

**O Game Guide embutido** — o guia do Professor Oak Challenge
- **Mewlax** ([u/mewlax84](https://www.reddit.com/user/mewlax84), Instagram [@pokemewlax](https://www.instagram.com/pokemewlax/),
  X [@Mewlax1](https://twitter.com/Mewlax1)) — autor dos **guias de ORAS e X/Y**, compartilhado pela comunidade
  [r/ProfessorOak](https://www.reddit.com/r/ProfessorOak/).
- **Chamale** — inspirou primeiro o Professor Oak Challenge lá em 2018.
- **Johnstone** e **Chaotic Meatball** — por ajudarem a comunidade r/ProfessorOak a crescer.
- **Dynamite** — pela ordem das O-Powers; **Likemeon** — pela dica de chaining na Granite Cave.

**Sugestões da comunidade**
- **[u/Cold_Birthday_2807](https://www.reddit.com/user/Cold_Birthday_2807)** — sugeriu a ideia do limite
  de nível por ginásio que virou o **Limite de Nível** (v0.7.7).

**Este fork**
- Fork, repaginação e adições da v0.3.0 → v0.7.7 por [samaBR85](https://github.com/samaBR85), feitos em colaboração
  com o **Claude** (Anthropic).

## Licença
Licenciado sob **GNU GPL-3.0**, herdada do upstream. Veja [LICENSE](LICENSE).
