add_executable(
	Compress
	"Compress.cpp"
)

add_dependencies(Compress Compression)
target_link_libraries(Compress Compression)