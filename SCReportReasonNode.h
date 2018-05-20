/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface SCReportReasonNode : NSObject {

	BOOL _shouldReportToServer;
	BOOL _isChildContextBased;
	NSString* _reasonId;
	NSString* _reason;
	NSString* _reportSubmitFeedbackId;
	NSURL* _reportingWebviewURL;
	NSArray* _children;
	NSString* _subtitleId;

}

@property (nonatomic,copy) NSString * reasonId;                            //@synthesize reasonId=_reasonId - In the implementation block
@property (nonatomic,copy) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * children;                             //@synthesize children=_children - In the implementation block
@property (nonatomic,copy) NSString * subtitleId;                          //@synthesize subtitleId=_subtitleId - In the implementation block
@property (assign,nonatomic) BOOL shouldReportToServer;                    //@synthesize shouldReportToServer=_shouldReportToServer - In the implementation block
@property (nonatomic,copy) NSString * reportSubmitFeedbackId;              //@synthesize reportSubmitFeedbackId=_reportSubmitFeedbackId - In the implementation block
@property (nonatomic,copy) NSURL * reportingWebviewURL;                    //@synthesize reportingWebviewURL=_reportingWebviewURL - In the implementation block
@property (nonatomic,readonly) BOOL isChildContextBased;                   //@synthesize isChildContextBased=_isChildContextBased - In the implementation block
+(id)nudityOrSextualContentNode;
+(id)harassmentOrHateSpeechParentNode;
+(id)threateningViolentOrConcerningParentNode;
+(id)spamNode;
+(id)copyrightInfringementNode;
+(id)subtitleForSubtitleId:(id)arg1 ;
+(id)lensInappropriateNode;
-(id)initWithReasonId:(id)arg1 reason:(id)arg2 subtitle:(id)arg3 children:(id)arg4 ;
-(id)childrenList;
-(id)initWithReasonId:(id)arg1 shouldSend:(BOOL)arg2 feedbackId:(id)arg3 ;
-(id)initWithReasonId:(id)arg1 reason:(id)arg2 subtitle:(id)arg3 isChildContextBased:(BOOL)arg4 children:(id)arg5 ;
-(id)initWithReasonId:(id)arg1 reason:(id)arg2 reportingWebviewURL:(id)arg3 ;
-(id)initWithReasonId:(id)arg1 reason:(id)arg2 shouldSend:(BOOL)arg3 feedbackId:(id)arg4 ;
-(id)initWithReasonId:(id)arg1 reason:(id)arg2 subtitle:(id)arg3 shouldSend:(BOOL)arg4 feedbackId:(id)arg5 reportingWebviewURL:(id)arg6 isChildContextBased:(BOOL)arg7 children:(id)arg8 ;
-(NSURL *)reportingWebviewURL;
-(NSString *)subtitleId;
-(id)subtitle:(id)arg1 ;
-(NSString *)reasonId;
-(void)setReasonId:(NSString *)arg1 ;
-(NSString *)reportSubmitFeedbackId;
-(void)setReportSubmitFeedbackId:(NSString *)arg1 ;
-(void)setReportingWebviewURL:(NSURL *)arg1 ;
-(BOOL)isChildContextBased;
-(void)setSubtitleId:(NSString *)arg1 ;
-(id)subtitle;
-(NSString *)reason;
-(void)setShouldReportToServer:(BOOL)arg1 ;
-(BOOL)shouldReportToServer;
-(BOOL)isFinal;
-(NSArray *)children;
-(void)setReason:(NSString *)arg1 ;
-(id)childAt:(unsigned long long)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
@end

