execute pathogen#infect()
syntax on
filetype plugin on
filetype plugin indent on
"set background=dark
"colorscheme base16-monokai
let g:airline_left_sep=''
let g:airline_right_sep=''


let g:airline_powerline_fonts=1
let g:syntastic_cpp_compiler = "clang++"
let g:ycm_global_ycm_extra_conf = "~/.vim/.ycm_extra_conf.py"
let g:ycm_show_diagnostics_ui = 0
let g:syntastic_cpp_compiler_options = ' -std=c++11 -stdlib=libc++'

set timeoutlen=500



set number
set autoindent
set smartindent
set tabstop=4
set shiftwidth=4
set expandtab
set mouse=a
set relativenumber

map <C-f> :NERDTreeToggle<CR>
map <C-t> :tab split<CR>
map <C-w> :tab close<CR>
map <C-h> :split<CR>
map <C-v> :vsplit<CR>
imap <S-Tab> <Esc>
nmap <silent> <C-Up> :wincmd k<CR>
nmap <silent> <C-Down> :wincmd j<CR>
nmap <silent> <C-Left> :wincmd h<CR>
nmap <silent> <C-Right> :wincmd l<CR>

set laststatus=2
