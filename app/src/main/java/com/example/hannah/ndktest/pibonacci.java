package com.example.hannah.ndktest;

/**
 * Created by Hannah on 2017-07-05.
 */

public class pibonacci {
    public native static int pibonacci(int input);

    public static String getPibonacci(int input){
        return String.valueOf(pibonacci(input));
    }
}
