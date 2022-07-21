project(pocketbook-yukari)
add_executable(sample.app ./src/main.c)
target_link_libraries(sample.app inkview)