/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCReportStoryDataParamsProvider;
@class NSString, Snap, SCChatMessageV3, Friend, SCReportStoryMetadataParams, SCLens;

@interface SCReportModel : NSObject {

	BOOL _isCheetahStory;
	NSString* _reasonId;
	Snap* _snap;
	SCChatMessageV3* _chatMessageV3;
	Friend* _friend;
	id<SCReportStoryDataParamsProvider> _storyDataProvider;
	SCReportStoryMetadataParams* _storyMetadataParams;
	SCLens* _lens;
	unsigned long long _storySnapSource;
	NSString* _reportedUsername;
	long long _reportType;
	NSString* _reportedAdId;
	NSString* _reportedCreatorName;

}

@property (assign,nonatomic,__weak) Snap * snap;                                                 //@synthesize snap=_snap - In the implementation block
@property (nonatomic,copy) SCChatMessageV3 * chatMessageV3;                                      //@synthesize chatMessageV3=_chatMessageV3 - In the implementation block
@property (assign,nonatomic,__weak) Friend * friend;                                             //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) id<SCReportStoryDataParamsProvider> storyDataProvider;              //@synthesize storyDataProvider=_storyDataProvider - In the implementation block
@property (nonatomic,retain) SCReportStoryMetadataParams * storyMetadataParams;                  //@synthesize storyMetadataParams=_storyMetadataParams - In the implementation block
@property (assign,nonatomic) unsigned long long storySnapSource;                                 //@synthesize storySnapSource=_storySnapSource - In the implementation block
@property (nonatomic,copy) NSString * reportedUsername;                                          //@synthesize reportedUsername=_reportedUsername - In the implementation block
@property (assign,nonatomic) long long reportType;                                               //@synthesize reportType=_reportType - In the implementation block
@property (nonatomic,copy) NSString * reportedAdId;                                              //@synthesize reportedAdId=_reportedAdId - In the implementation block
@property (assign,nonatomic,__weak) SCLens * lens;                                               //@synthesize lens=_lens - In the implementation block
@property (nonatomic,copy) NSString * reportedCreatorName;                                       //@synthesize reportedCreatorName=_reportedCreatorName - In the implementation block
@property (nonatomic,copy) NSString * reasonId;                                                  //@synthesize reasonId=_reasonId - In the implementation block
@property (assign,nonatomic) BOOL isCheetahStory;                                                //@synthesize isCheetahStory=_isCheetahStory - In the implementation block
+(id)shared;
-(SCLens *)lens;
-(void)setLens:(SCLens *)arg1 ;
-(NSString *)reasonId;
-(void)setReasonId:(NSString *)arg1 ;
-(void)prepareFriendReport:(id)arg1 ;
-(void)prepareAdReport:(id)arg1 isCheetahStory:(BOOL)arg2 ;
-(void)prepareChatMessageV3Report:(id)arg1 ;
-(void)prepareSnapReport:(id)arg1 ;
-(void)prepareStoryReport:(id)arg1 source:(unsigned long long)arg2 ;
-(SCReportStoryMetadataParams *)storyMetadataParams;
-(void)prepareReportingStoryWithMetadata:(id)arg1 source:(unsigned long long)arg2 ;
-(void)setIsCheetahStory:(BOOL)arg1 ;
-(BOOL)isCheetahStory;
-(void)prepareLensReport:(id)arg1 ;
-(void)preparePublicUserStoryReport:(id)arg1 source:(unsigned long long)arg2 ;
-(void)prepareOurStoryReport:(id)arg1 source:(unsigned long long)arg2 storyDataProvider:(id)arg3 ;
-(void)prepareSearchStoryReport:(id)arg1 source:(unsigned long long)arg2 storyDataProvider:(id)arg3 ;
-(void)prepareMapStoryReport:(id)arg1 source:(unsigned long long)arg2 storyDataProvider:(id)arg3 ;
-(NSString *)reportedUsername;
-(unsigned long long)storySnapSource;
-(id<SCReportStoryDataParamsProvider>)storyDataProvider;
-(SCChatMessageV3 *)chatMessageV3;
-(void)resetReport;
-(void)setReportedUsername:(NSString *)arg1 ;
-(void)setChatMessageV3:(SCChatMessageV3 *)arg1 ;
-(void)setStorySnapSource:(unsigned long long)arg1 ;
-(void)setStoryDataProvider:(id<SCReportStoryDataParamsProvider>)arg1 ;
-(void)setStoryMetadataParams:(SCReportStoryMetadataParams *)arg1 ;
-(void)setReportedAdId:(NSString *)arg1 ;
-(void)setReportedCreatorName:(NSString *)arg1 ;
-(NSString *)reportedAdId;
-(id)reportTypeString;
-(NSString *)reportedCreatorName;
-(Friend *)friend;
-(void)setFriend:(Friend *)arg1 ;
-(void)setReportType:(long long)arg1 ;
-(long long)reportType;
-(void)setSnap:(Snap *)arg1 ;
-(id)clusterId;
-(Snap *)snap;
@end

