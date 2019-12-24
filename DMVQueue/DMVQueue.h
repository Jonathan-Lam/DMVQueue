class Queue {
	private:
		int line;
	public:
		Queue();
		Queue(int i): line(i) {}
		void add(int);
		void remove(int);
		int get_line();
};