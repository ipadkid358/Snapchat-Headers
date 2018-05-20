/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FindFriendsAnalytics : NSObject {

	BOOL _serverDataReady;
	BOOL _isRegistration;
	unsigned long long _sizeOfAddressBook;
	double _onContactAccessGrantTime;
	double _onFindFriendsRequest;
	double _onFindFriendsResponse;
	unsigned long long _numOfSnapchatters;

}

@property (assign,nonatomic) double onFindFriendsRequest;                                     //@synthesize onFindFriendsRequest=_onFindFriendsRequest - In the implementation block
@property (assign,nonatomic) double onFindFriendsResponse;                                    //@synthesize onFindFriendsResponse=_onFindFriendsResponse - In the implementation block
@property (assign,nonatomic) BOOL isRegistration;                                             //@synthesize isRegistration=_isRegistration - In the implementation block
@property (assign,nonatomic) unsigned long long sizeOfAddressBook;                            //@synthesize sizeOfAddressBook=_sizeOfAddressBook - In the implementation block
@property (assign,nonatomic) unsigned long long numOfSnapchatters;                            //@synthesize numOfSnapchatters=_numOfSnapchatters - In the implementation block
@property (nonatomic,readonly) double contactsGrantedToFriendsResponseLatencyMs; 
@property (nonatomic,readonly) double onContactAccessGrantTime;                               //@synthesize onContactAccessGrantTime=_onContactAccessGrantTime - In the implementation block
@property (nonatomic,readonly) BOOL serverDataReady;                                          //@synthesize serverDataReady=_serverDataReady - In the implementation block
+(id)sharedInstance;
-(BOOL)serverDataReady;
-(void)_resetAnalytics;
-(void)setTimestampOnContactAccessGrant;
-(void)setTimestampOnSentFindFriendsRequestWithAddressBookSize:(unsigned long long)arg1 ;
-(void)setAddressBookAnalytics:(unsigned long long)arg1 numSnapchatters:(unsigned long long)arg2 ;
-(void)logFindFriendsLatencies;
-(double)contactsGrantedToFriendsResponseLatencyMs;
-(unsigned long long)sizeOfAddressBook;
-(void)setSizeOfAddressBook:(unsigned long long)arg1 ;
-(double)onContactAccessGrantTime;
-(double)onFindFriendsRequest;
-(void)setOnFindFriendsRequest:(double)arg1 ;
-(double)onFindFriendsResponse;
-(void)setOnFindFriendsResponse:(double)arg1 ;
-(BOOL)isRegistration;
-(void)setIsRegistration:(BOOL)arg1 ;
-(unsigned long long)numOfSnapchatters;
-(void)setNumOfSnapchatters:(unsigned long long)arg1 ;
-(id)init;
-(void)setRegistration:(BOOL)arg1 ;
@end

