/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCGroupStoryCreationSession : NSObject {

	BOOL _success;
	BOOL _hasDisplayName;
	BOOL _autosaveTurnOn;
	BOOL _hasSeenSelectViewers;
	BOOL _mapHasLoaded;
	BOOL _changedGeocodedAddress;
	BOOL _setGeoPrivacy;
	BOOL _readGeoPrivacyAlert;
	double _startTime;
	double _timeSpent;
	long long _failedCount;
	long long _numPosters;
	long long _numViewers;
	double _reverseGeocodeTimeMs;
	long long _sourceType;
	long long _storyType;

}

@property (assign,nonatomic) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeSpent;                         //@synthesize timeSpent=_timeSpent - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayName;                      //@synthesize hasDisplayName=_hasDisplayName - In the implementation block
@property (assign,nonatomic) long long failedCount;                    //@synthesize failedCount=_failedCount - In the implementation block
@property (assign,nonatomic) BOOL autosaveTurnOn;                      //@synthesize autosaveTurnOn=_autosaveTurnOn - In the implementation block
@property (assign,nonatomic) BOOL hasSeenSelectViewers;                //@synthesize hasSeenSelectViewers=_hasSeenSelectViewers - In the implementation block
@property (assign,nonatomic) long long numPosters;                     //@synthesize numPosters=_numPosters - In the implementation block
@property (assign,nonatomic) long long numViewers;                     //@synthesize numViewers=_numViewers - In the implementation block
@property (assign,nonatomic) BOOL mapHasLoaded;                        //@synthesize mapHasLoaded=_mapHasLoaded - In the implementation block
@property (assign,nonatomic) BOOL changedGeocodedAddress;              //@synthesize changedGeocodedAddress=_changedGeocodedAddress - In the implementation block
@property (assign,nonatomic) BOOL setGeoPrivacy;                       //@synthesize setGeoPrivacy=_setGeoPrivacy - In the implementation block
@property (assign,nonatomic) BOOL readGeoPrivacyAlert;                 //@synthesize readGeoPrivacyAlert=_readGeoPrivacyAlert - In the implementation block
@property (assign,nonatomic) double reverseGeocodeTimeMs;              //@synthesize reverseGeocodeTimeMs=_reverseGeocodeTimeMs - In the implementation block
@property (assign,nonatomic) long long sourceType;                     //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) long long storyType;                      //@synthesize storyType=_storyType - In the implementation block
+(id)newSession;
-(void)setFailedCount:(long long)arg1 ;
-(void)setHasSeenSelectViewers:(BOOL)arg1 ;
-(long long)failedCount;
-(BOOL)hasSeenSelectViewers;
-(BOOL)autosaveTurnOn;
-(void)setAutosaveTurnOn:(BOOL)arg1 ;
-(void)setTimeSpent:(double)arg1 ;
-(void)setSetGeoPrivacy:(BOOL)arg1 ;
-(void)setReadGeoPrivacyAlert:(BOOL)arg1 ;
-(void)setChangedGeocodedAddress:(BOOL)arg1 ;
-(void)setReverseGeocodeTimeMs:(double)arg1 ;
-(void)setMapHasLoaded:(BOOL)arg1 ;
-(void)setNumPosters:(long long)arg1 ;
-(void)setNumViewers:(long long)arg1 ;
-(double)timeSpent;
-(long long)numPosters;
-(long long)numViewers;
-(BOOL)mapHasLoaded;
-(BOOL)changedGeocodedAddress;
-(BOOL)setGeoPrivacy;
-(BOOL)readGeoPrivacyAlert;
-(double)reverseGeocodeTimeMs;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(BOOL)hasDisplayName;
-(void)setHasDisplayName:(BOOL)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)success;
-(long long)storyType;
-(void)setStoryType:(long long)arg1 ;
@end

