/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTV3CallRequest.h>

@protocol SCTV3CallRequest <NSObject>
@required
-(id)talkCorePayload;
-(id)convoId;
-(unsigned long long)action;
-(BOOL)hasAction;
-(unsigned long long)media;

@end


@class NSString, NSNumber;

@interface SCTV3CallRequest : NSObject <SCTV3CallRequest> {

	NSString* _convoId;
	NSNumber* _action;
	unsigned long long _media;
	NSString* _talkCorePayload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)talkCorePayload;
-(id)convoId;
-(id)initWithConvoId:(id)arg1 talkCorePayload:(id)arg2 ;
-(BOOL)_validAction:(unsigned long long)arg1 ;
-(BOOL)_validMedia:(unsigned long long)arg1 ;
-(id)initWithConvoId:(id)arg1 action:(unsigned long long)arg2 media:(unsigned long long)arg3 talkCorePayload:(id)arg4 ;
-(id)_stringFromAction:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)action;
-(BOOL)hasAction;
-(unsigned long long)media;
@end

