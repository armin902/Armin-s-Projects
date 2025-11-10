public class Main
{
    public static void main(String[] args)
    {
        Rooms rooms = new Rooms();      // Realization with Rooms
        rooms.getRooms();
        rooms.setRooms(8,16);
        rooms.getRooms();
        System.out.println();

        Rooms.ClassRoom classroom = rooms.new ClassRoom();  // Realization with ClassRoom
        classroom.getClassRoom();
        classroom.setClassRoom(10);
        classroom.getClassRoom();
        System.out.println();


        Rooms.Labs lab = rooms.new Labs();  // Realization with Labs
        lab.getLabs();
        lab.setLabs(25);
        lab.getLabs();
        System.out.println();


        Rooms.ConferenceRoom conferenceRoom = rooms.new ConferenceRoom();   // Realization with ConferenceRoom
        conferenceRoom.getConferenceRoom();
        conferenceRoom.setConferenceRoom(8);
        conferenceRoom.getConferenceRoom();
    }
}