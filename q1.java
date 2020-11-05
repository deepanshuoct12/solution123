import java.io.*;
import java.time.DayOfWeek;
import java.time.LocalDate;
import java.time.Month;
import java.util.*;
public class ct1 {

    public static void main(String args[] ) throws Exception {
        int res = 0;
        LocalDate start = LocalDate.of(1901, Month.JANUARY, 1),
                  end = LocalDate.of(2001, Month.JANUARY, 1);
        while (start.isBefore(end)) {
            if (start.getDayOfWeek() == DayOfWeek.SUNDAY)
                res++;
            start = start.plusMonths(1);
        }
        System.out.println(res);
    }


}