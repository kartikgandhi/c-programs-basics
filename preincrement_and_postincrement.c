// ++i
int pre_increment(i) {
    i += 1;
    return i;
}
// i++
int post_increment(i) {
    copy = i;
    i += 1;
    return copy;
}

void main() {
printf("%d", pre_increment(2));
printf("%d", post_increment(2));
}
