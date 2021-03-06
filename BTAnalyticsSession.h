/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSDictionary;

@interface BTAnalyticsSession : NSObject {

	NSString* _sessionID;
	NSString* _source;
	NSString* _integration;
	NSMutableArray* _events;
	NSDictionary* _metadataParameters;

}

@property (nonatomic,copy) NSString * sessionID;                             //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * integration;                           //@synthesize integration=_integration - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                        //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSDictionary * metadataParameters;              //@synthesize metadataParameters=_metadataParameters - In the implementation block
+(id)sessionWithID:(id)arg1 source:(id)arg2 integration:(id)arg3 ;
-(void)setIntegration:(NSString *)arg1 ;
-(NSString *)integration;
-(NSDictionary *)metadataParameters;
-(void)setMetadataParameters:(NSDictionary *)arg1 ;
-(id)init;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
@end

