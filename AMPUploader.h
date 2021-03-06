/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMPUploaderDelegate, AMPUploaderDetailsDelegate, AMPConfigProtocol;
@class NSURL, AMPJsonSerializer, AMPTimeProvider, SCRequestManager, NSOperationQueue;

@interface AMPUploader : NSObject {

	BOOL _uploadInProgress;
	BOOL _didLastUploadSucceed;
	id<AMPUploaderDelegate> _delegate;
	id<AMPUploaderDetailsDelegate> _detailsDelegate;
	NSURL* _uploadUrl;
	AMPJsonSerializer* _jsonSerializer;
	/*^block*/id _tokenProvider;
	AMPTimeProvider* _timeProvider;
	SCRequestManager* _requestManager;
	NSOperationQueue* _loggingQueue;
	id<AMPConfigProtocol> _config;

}

@property (assign,getter=isUploadInProgress,nonatomic) BOOL uploadInProgress;              //@synthesize uploadInProgress=_uploadInProgress - In the implementation block
@property (nonatomic,retain) NSURL * uploadUrl;                                            //@synthesize uploadUrl=_uploadUrl - In the implementation block
@property (nonatomic,retain) AMPJsonSerializer * jsonSerializer;                           //@synthesize jsonSerializer=_jsonSerializer - In the implementation block
@property (nonatomic,copy) id tokenProvider;                                               //@synthesize tokenProvider=_tokenProvider - In the implementation block
@property (nonatomic,retain) AMPTimeProvider * timeProvider;                               //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,retain) SCRequestManager * requestManager;                            //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * loggingQueue;                              //@synthesize loggingQueue=_loggingQueue - In the implementation block
@property (nonatomic,retain) id<AMPConfigProtocol> config;                                 //@synthesize config=_config - In the implementation block
@property (assign,nonatomic,__weak) id<AMPUploaderDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<AMPUploaderDetailsDelegate> detailsDelegate;               //@synthesize detailsDelegate=_detailsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL didLastUploadSucceed;                                  //@synthesize didLastUploadSucceed=_didLastUploadSucceed - In the implementation block
-(NSURL *)uploadUrl;
-(void)setUploadUrl:(NSURL *)arg1 ;
-(AMPTimeProvider *)timeProvider;
-(BOOL)isUploadInProgress;
-(void)uploadEvents:(id)arg1 numEventsOnDisk:(unsigned long long)arg2 totalEventsOverflowed:(unsigned long long)arg3 criticalEventsOverflowed:(unsigned long long)arg4 p0EventsOverflowed:(unsigned long long)arg5 ;
-(BOOL)didLastUploadSucceed;
-(NSOperationQueue *)loggingQueue;
-(void)configureUploadUrlOverride:(id)arg1 ;
-(void)setLoggingQueue:(NSOperationQueue *)arg1 ;
-(void)_setUploadDate:(id)arg1 forEvents:(id)arg2 ;
-(id)_filterEventList:(id)arg1 ;
-(id)_serializeEventsAsJsonData:(id)arg1 ;
-(long long)_lastSequenceIdInEvents:(id)arg1 ;
-(void)_uploadEventsData:(id)arg1 lastEventSequenceId:(long long)arg2 numEventsOnDisk:(unsigned long long)arg3 totalEventsOverflowed:(unsigned long long)arg4 criticalEventsOverflowed:(unsigned long long)arg5 p0EventsOverflowed:(unsigned long long)arg6 ;
-(BOOL)_isEventGood:(id)arg1 ;
-(id)_prepareRequestHeaders;
-(void)informDelegatesOfLastEventSequenceId:(long long)arg1 numEventsOnDisk:(unsigned long long)arg2 requestStartDate:(id)arg3 requestBytesSize:(unsigned long long)arg4 response:(id)arg5 error:(id)arg6 data:(id)arg7 totalEventsOverflowed:(unsigned long long)arg8 criticalEventsOverflowed:(unsigned long long)arg9 p0EventsOverflowed:(unsigned long long)arg10 ;
-(BOOL)_isUploadSuccessful:(id)arg1 error:(id)arg2 ;
-(id<AMPUploaderDetailsDelegate>)detailsDelegate;
-(AMPJsonSerializer *)jsonSerializer;
-(id)tokenProvider;
-(id)initWithUploadUrl:(id)arg1 jsonSerializer:(id)arg2 tokenProvider:(/*^block*/id)arg3 timeProvider:(id)arg4 requestManager:(id)arg5 loggingQueue:(id)arg6 config:(id)arg7 ;
-(void)setDetailsDelegate:(id<AMPUploaderDetailsDelegate>)arg1 ;
-(void)setJsonSerializer:(AMPJsonSerializer *)arg1 ;
-(void)setTokenProvider:(id)arg1 ;
-(void)setTimeProvider:(AMPTimeProvider *)arg1 ;
-(void)setDelegate:(id<AMPUploaderDelegate>)arg1 ;
-(id<AMPUploaderDelegate>)delegate;
-(id<AMPConfigProtocol>)config;
-(void)setConfig:(id<AMPConfigProtocol>)arg1 ;
-(void)setUploadInProgress:(BOOL)arg1 ;
-(SCRequestManager *)requestManager;
-(void)setRequestManager:(SCRequestManager *)arg1 ;
@end

