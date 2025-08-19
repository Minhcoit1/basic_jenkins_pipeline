pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                // Lấy code từ repo
                checkout scm
            }
        }

        stage('Build') {
            steps {
                sh 'gcc calc.c -o calc'
            }
        }

        stage('Run') {
            steps {
                sh './calc'
            }
        }
    }
}
