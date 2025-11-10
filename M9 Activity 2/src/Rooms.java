public class Rooms {
    private int noOfTables;
    private int noOfChairs;

    public Rooms() {
        noOfTables = 4;
        noOfChairs = 12;
    }

    public void setRooms(int noOfTables, int noOfChairs) {
        this.noOfTables = noOfTables;
        this.noOfChairs = noOfChairs;
    }

    public void getRooms() {
        System.out.println("Number of Tables: " + noOfTables);
        System.out.println("Number of Chairs: " + noOfChairs);
    }

    public class ClassRoom {
        private int noOfWhiteBoards;

        public ClassRoom() {
            noOfWhiteBoards = 2;
        }

        public void setClassRoom(int noOfWhiteBoards) {
            this.noOfWhiteBoards = noOfWhiteBoards;
        }

        public void getClassRoom() {
            System.out.println("Number of Whiteboards: " + noOfWhiteBoards);
        }
    }

    public class Labs {
        private int noOfComputers;

        public Labs() {
            noOfComputers = 20;
        }

        public void setLabs(int noOfComputers) {
            this.noOfComputers = noOfComputers;
        }

        public void getLabs() {
            System.out.println("Number of Computers: " + noOfComputers);
        }
    }

    public class ConferenceRoom {
        private int noOfProjectors;

        public ConferenceRoom() {
            noOfProjectors = 4;
        }

        public void setConferenceRoom(int noOfProjectors) {
            this.noOfProjectors = noOfProjectors;
        }

        public void getConferenceRoom() {
            System.out.println("Number of Projectors: " + noOfProjectors);
        }
    }
}
