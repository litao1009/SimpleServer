load "./gen" "../../moriServer/transMsg"
criteria binary
filter "*.pb.h;*.pb.cc;"
select left.diff.files
copy left->right
select left.orphan.files
copy left->right

load "./gen" "../../moriServer/src/DataBase"
criteria binary
filter "*.h;*.cpp;"
select left.diff.files
copy left->right
select left.orphan.files
copy left->right
select left.files
delete left