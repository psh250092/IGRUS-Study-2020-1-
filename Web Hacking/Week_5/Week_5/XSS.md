# 5주차

## Cilent-Side Basic - XSS

### 1. 개요

XSS (Cross-Website-Scripting)

XSS는 서버의 응답에 공격자가 삽입한 악성 스크립트를 받은 사용자의 웹 브라우저에서 악성 스크립트가 실행되는 취약점이다. CSRF등의 다양한 공격의 시작점이 될 수 있는 중요한 보안 취약점 중 하나이다.



조건 :

1) 입력 데이터에 대한 충분한 검증 과정이 없어야 함

2) 서버의 응답 데이터가 웹 브라우저 내 페이지에 출력 시 충분한 검증 과정이 없어야 함



분류 : 

1)  Stored XSS

2) Reflected XSS

### 2. Stored XSS

서버 내에  존재하는 데이터베이스 또는 파일 등의 형태로 저장되어 있다가 사용자가 저장된 악성 스크립트를 조회하는 순간 발생.

ex) 게시판 서비스에 작성된 게시판 확인 중 악성 스크립트가 포함된 게시물 조회



### 3. Reflected XX

악성 스크립트가 사용자의 요청 시 전송되는 형태. 사용자의 요청 데이터가 서버의 응답에 포함되는 과정에서 발생함

ex) 게시물들을 검색하기 위해 입력한 검색어가 검색 웹페이지에 그대로 표시

### 4. Mitigration

1. Server-side Mitigrations
2. HTTPOnly 플래그 사용
3. Contect Security Policy 사용
4. X-XSS-Protection