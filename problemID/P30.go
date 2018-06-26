package problemID

/*import (
    "fmt"
)*/

type Interval struct {
    Start, End int
}

/**
 * 插入区间
 * @param intervals: Sorted interval list.
 * @param newInterval: new interval.
 * @return: A new interval list.
 */
func insert (intervals []*Interval, newInterval *Interval) []*Interval {
    // write your code here
    l := len(intervals)
    if l == 0 { return []*Interval{newInterval} }

    var ans []*Interval
    s := newInterval.Start
    e := newInterval.End
    var i, inters, intere int = 0, s, e

    for ; i < l; i++ {
        if s > intervals[i].End {
            ans = append(ans, intervals[i])
        }else if s >= intervals[i].Start {
            inters = intervals[i].Start
            break
        }else{
            break
        }
    }

    if i == l {goto loop}

    for ; i < l; i++ {
        if e < intervals[i].Start {
            intere = e
            break
        }else if e < intervals[i].End {
            intere = intervals[i].End
            i++
            break
        }
    }
loop:
    ans = append(ans, &Interval{inters, intere})
    ans = append(ans, intervals[i:l]...)

    return ans
}

func insert2 (intervals []*Interval, newInterval *Interval) []*Interval {

}

func P30(){
    a := Interval{1, 2}
    b := Interval{5, 9}
    var inter = []*Interval{&a, &b}

    print(insert(inter, &Interval{2, 5}))
}