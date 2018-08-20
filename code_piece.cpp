//关于timepoint

auto timePoint = std::chrono::system_clock::now();
std::time_t t = std::chrono::system_clock::to_time_t(timePoint);
auto ltime = std::localtime(&t); // or gmtime.
auto eventTime = std::chrono::hours(ltime->tm_hour)
    + std::chrono::minutes(ltime->tm_min);

auto lower_bound = std::chrono::hours(12) + std::chrono::minutes(0);
auto upper_bound = std::chrono::hours(12) + std::chrono::minutes(5);

if (lower_bound <= eventTime && eventTime <= upper_bound) {
    // Do some action.
}
