# Maze

## Maze project for uglimes class

Description:

1. print game info
2. print level list
   1. level selector
3. game stater (bazidan kitxulobs dafas + svlebis raodenobas)
4. game:

   1. drawer
   2. input getter
   3. move maker (shecdoma || svla gaaktos)
   4. winchecher

5. process and print game info (qula)

GOTO: 2

File standard:

```
5 // simagle
5 // sigane
2 // chemi pozicia y
3 // chemi pozicia x
4 // goal y
3 // goal x
4 // move count
+---+
|---|
|- @|
|-  |
+--x+
```

### player

1. current position `level start position`
2. icon `load from icon.txt || get icon from cin`

---

### level list

1. level count `const`
2. max level unlocked `load from level.txt`

---

### level `load from x.txt`

1. height
2. width
3. player start position
4. goal position
5. move count
6. map (char[][])

---
