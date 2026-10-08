class Twitter {
public:
unordered_map<int,vector<pair<int,int>>>tweets;
unordered_map<int,unordered_set<int>>following;
int time=0;
    Twitter() {

    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<pair<int,int>>t;
        for(auto p:tweets[userId])
        {
            t.push_back(p);
        }
        for(auto s:following[userId])
        {
             for(auto f:tweets[s])
             {
                t.push_back(f);
             }
        }
        sort(t.rbegin(),t.rend());
        vector<int>feed;
        for(int i=0;i<min(10,(int)t.size());i++)
        {
            feed.push_back(t[i].second);
        }
        return feed;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};
