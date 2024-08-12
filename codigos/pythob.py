import threading
import time

# Função que será executada pela primeira thread
def thread_function_1():
    for i in range(5):
        print(f"[INFO] Thread 1 - Iteração {i}")
        time.sleep(1)
    print("[INFO] Thread 1 - Finalizada")

# Função que será executada pela segunda thread
def thread_function_2():
    for i in range(5):
        print(f"[INFO] Thread 2 - Iteração {i}")
        time.sleep(1.5)
    print("[INFO] Thread 2 - Finalizada")

if __name__ == "__main__":
    print("[INFO] Iniciando o programa")

    # Criando as threads
    thread1 = threading.Thread(target=thread_function_1)
    thread2 = threading.Thread(target=thread_function_2)

    print("[INFO] Iniciando as threads")
    # Iniciando as threads
    thread1.start()
    thread2.start()

    # Aguardando as threads terminarem
    thread1.join()
    thread2.join()

    print("[INFO] Execução das threads finalizada")
    print("[INFO] Programa finalizado")
