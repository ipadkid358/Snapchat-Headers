/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCShazamManagerDelegate;
#import <Snapchat/Snapchat-Structs.h>
@class NSString, NSDictionary, UIImage;

@interface SCShazamManager : NSObject {

	SHAZAM_SIGX* _sigx;
	double _rootMeanSqure;
	NSString* _countryCode;
	NSString* _languageCode;
	double _maxSampleSeconds;
	double _sendInterval;
	BOOL _sendingInProgress;
	BOOL _receivedValidResponse;
	id<SCShazamManagerDelegate> _delegate;
	double _prevSentTime;
	double _retryLength;
	double _responseReceivedTime;
	double _recordStartTime;
	NSDictionary* _currResponse;
	double _serverResponseTime;
	UIImage* _topSnapImage;

}

@property (assign,nonatomic,__weak) id<SCShazamManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double prevSentTime;                                      //@synthesize prevSentTime=_prevSentTime - In the implementation block
@property (assign,nonatomic) double retryLength;                                       //@synthesize retryLength=_retryLength - In the implementation block
@property (assign,nonatomic) BOOL sendingInProgress;                                   //@synthesize sendingInProgress=_sendingInProgress - In the implementation block
@property (assign,nonatomic) BOOL receivedValidResponse;                               //@synthesize receivedValidResponse=_receivedValidResponse - In the implementation block
@property (assign,nonatomic) double responseReceivedTime;                              //@synthesize responseReceivedTime=_responseReceivedTime - In the implementation block
@property (assign,nonatomic) double recordStartTime;                                   //@synthesize recordStartTime=_recordStartTime - In the implementation block
@property (nonatomic,copy) NSDictionary * currResponse;                                //@synthesize currResponse=_currResponse - In the implementation block
@property (assign,nonatomic) double serverResponseTime;                                //@synthesize serverResponseTime=_serverResponseTime - In the implementation block
@property (nonatomic,retain) UIImage * topSnapImage;                                   //@synthesize topSnapImage=_topSnapImage - In the implementation block
+(id)sharedManager;
-(void)resetInfo;
-(double)serverResponseTime;
-(void)setRetryLength:(double)arg1 ;
-(BOOL)receivedValidResponse;
-(void)setPrevSentTime:(double)arg1 ;
-(void)sendRequest:(id)arg1 withToken:(id)arg2 countryCode:(id)arg3 deviceId:(id)arg4 sessionId:(id)arg5 maxSampleSeconds:(double)arg6 sendInterval:(double)arg7 successBlock:(/*^block*/id)arg8 ;
-(double)retryLength;
-(double)prevSentTime;
-(BOOL)sendingInProgress;
-(void)setSendingInProgress:(BOOL)arg1 ;
-(void)handlePCMPostFailureWithError:(id)arg1 ;
-(void)setServerResponseTime:(double)arg1 ;
-(void)handlePCMPostSuccessWithResponse:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)setResponseReceivedTime:(double)arg1 ;
-(void)setReceivedValidResponse:(BOOL)arg1 ;
-(void)setCurrResponse:(NSDictionary *)arg1 ;
-(double)responseReceivedTime;
-(double)recordStartTime;
-(void)setRecordStartTime:(double)arg1 ;
-(NSDictionary *)currResponse;
-(UIImage *)topSnapImage;
-(void)setTopSnapImage:(UIImage *)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCShazamManagerDelegate>)arg1 ;
-(id<SCShazamManagerDelegate>)delegate;
@end

