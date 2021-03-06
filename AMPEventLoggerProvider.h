/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSArray, NSDictionary;

@interface AMPEventLoggerProvider : NSObject {

	NSArray* _defaultLoggers;
	NSDictionary* _eventPrefixToLoggers;
	NSDictionary* _eventNameToLoggers;

}

@property (nonatomic,retain) NSArray * defaultLoggers;                         //@synthesize defaultLoggers=_defaultLoggers - In the implementation block
@property (nonatomic,retain) NSDictionary * eventPrefixToLoggers;              //@synthesize eventPrefixToLoggers=_eventPrefixToLoggers - In the implementation block
@property (nonatomic,retain) NSDictionary * eventNameToLoggers;                //@synthesize eventNameToLoggers=_eventNameToLoggers - In the implementation block
-(NSArray *)defaultLoggers;
-(NSDictionary *)eventNameToLoggers;
-(NSArray*)_prefixMatchLoggersForEventName:(id)arg1 ;
-(NSDictionary *)eventPrefixToLoggers;
-(id)initWithDefaultLoggers:(NSArray*)arg1 eventNameToLoggers:(NSDictionary*)arg2 eventPrefixToLoggers:(NSDictionary*)arg3 ;
-(void)setDefaultLoggers:(NSArray *)arg1 ;
-(void)setEventPrefixToLoggers:(NSDictionary *)arg1 ;
-(void)setEventNameToLoggers:(NSDictionary *)arg1 ;
-(NSArray*)getLoggersForEventName:(id)arg1 ;
@end

