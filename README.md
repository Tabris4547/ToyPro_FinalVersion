# 토이 프로젝트

   여기에 큰 그림을.....


# 디렉토리 구조

* /bin
    toy_system + toy_web 프로그램 실행 파일 위치 (기존에는 filebrowser 사용)

* /systems
    우리의 system 관련 프로그램 소스 코드
    엔진/카메라/센서 등등

* /drivers
    앞으로 토이 프로젝트에서 만들 디바이스 드라이버 코드

* /kernel
    빌트인 드라이버 + 커널 디버깅을 위한 스크립트 또는 커널 관련 수정 사항

* /buildroot
    임베디드 리눅스 패키징 빌드 시스템

* /toy-fe
    Frontend 소스 코드(React + Typescript 기반)

* /toy-api
    Frontend API 소스 코드(Javascript)

* /toy-be
    backend 소스 코드(golang 기반)

# 타겟 버전 빌드 방법

* system
```sh
make
```

* Frontend
```sh
make toy-fe
```

* Backend
```sh
make toy-be
```

# PC 개발 환경

## golang 설치
```
https://go.dev/doc/install
```

## 패키지 설치
```
sudo apt-get update && sudo apt-get --no-install-recommends install -y build-essential curl pkg-config

```

## node 설치
```
curl -sL https://deb.nodesource.com/setup_16.x | sudo -E bash -
sudo apt-get install -y nodejs

```

## 개발 서버 실행

```
npm ci && \
cd toy-api && npm ci && \
cd ../toy-fe && npm ci && npm start
```

### 아래 VScode extention 설치
  - [Debugger for Chrome](https://marketplace.visualstudio.com/items?itemName=msjsdiag.debugger-for-chrome)
  - [JavaScript Debugger](https://marketplace.visualstudio.com/items?itemName=ms-vscode.js-debug)
  - [ESLint](https://marketplace.visualstudio.com/items?itemName=dbaeumer.vscode-eslint)
  - [Stylelint](https://marketplace.visualstudio.com/items?itemName=stylelint.vscode-stylelint)
  - [vscode-remark-lint](https://marketplace.visualstudio.com/items?itemName=drewbourne.vscode-remark-lint)
  - [licenser](https://marketplace.visualstudio.com/items?itemName=ymotongpoo.licenser)
  - [Trailing Spaces](https://marketplace.visualstudio.com/items?itemName=shardulm94.trailing-spaces)


## JavaScript/Typescript coding style

[Airbnb JavaScript Style Guide](https://github.com/airbnb/javascript)


