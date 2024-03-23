function calculateDaysBetweenDates(begin, end) {
    var beginDate = new Date(begin);
    var endDate = new Date(end);
    var millisecondsPerDay = 1000 * 60 * 60 * 24;
    return Math.floor((endDate - beginDate) / millisecondsPerDay);
}