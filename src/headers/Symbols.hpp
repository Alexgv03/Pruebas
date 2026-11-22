#ifndef __SYMBOLS_HPP__
#define __SYMBOLS_HPP__

/** 
 * Gramatica G'(N', T, P', S)
 * 
 * 1.  programa       -> declaraciones sentencias
 * 2.  declaraciones  -> declaracion declaraciones'
 * 3.  declaraciones' -> declaracion declaraciones'
 * 4.  declaraciones' -> ε
 * 5.  declaracion    -> tipo lista_var ;
 * 6.  tipo           -> int
 * 7.  tipo           -> float
 * 8.  lista_var      -> identificador lista_var'
 * 9.  lista_var'     -> , identificador lista_var'
 * 10. lista_var'     -> ε
 * 11. sentencias     -> sentencia sentencias'
 * 12. sentencias'    -> sentencia sentencias'
 * 13. sentencias'    -> ε
 * 14. sentencia      -> identificador = E ;
 * 15. sentencia      -> if ( E ) sentencias else sentencias
 * 16. sentencia      -> while ( E ) sentencias
 * 17. E              -> T E'
 * 18. E'             -> + T E'
 * 19. E'             -> - T E'
 * 20. E'             -> ε
 * 21. T              -> F T'
 * 22. T'             -> * F T'
 * 23. T'             -> / F T'
 * 24. T'             -> ε
 * 25. F              -> identificador
 * 26. F              -> numero
 * 27. F              -> ( E )
 */

/**
 * Enum conj T (Σ)
 */
enum Token {
    t_eof,      // 0
    t_int,      // 1
    t_float,    // 2
    t_if,       // 3
    t_else,     // 4
    t_while,    // 5
    t_id,       // 6
    t_numero,   // 7
    t_pyc,      // 8
    t_coma,     // 9
    t_asign,    // 10
    t_suma,     // 11
    t_resta,    // 12
    t_mult,     // 13
    t_div,      // 14
    t_pizq,     // 15
    t_pder      // 16
};

/**
 * enum conjunto N
 * empieza en 100 para evitar colision de llaves con Token en Grammar::syms
 */
enum NoTerm {
    strEmpty = 100,
    nt_programa,
    nt_declaraciones,
    nt_declaraciones_p,
    nt_declaracion,
    nt_tipo,
    nt_lista_var,
    nt_lista_var_p,
    nt_sentencias,
    nt_sentencias_p,
    nt_sentencia,
    nt_E,
    nt_Ep,
    nt_T,
    nt_Tp,
    nt_F
};

#endif // !__SYMBOLS_HPP__