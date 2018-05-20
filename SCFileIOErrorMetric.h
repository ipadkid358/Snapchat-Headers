/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SCFileIOErrorMetric : NSObject {

	unsigned long long _type;
	unsigned long long _fileIOCount;
	unsigned long long _fileIOErrorCount;
	NSMutableDictionary* _fileIOErrorCountByCode;

}

@property (nonatomic,readonly) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long fileIOCount;                                 //@synthesize fileIOCount=_fileIOCount - In the implementation block
@property (nonatomic,readonly) unsigned long long fileIOErrorCount;                            //@synthesize fileIOErrorCount=_fileIOErrorCount - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * fileIOErrorCountByCode;              //@synthesize fileIOErrorCountByCode=_fileIOErrorCountByCode - In the implementation block
-(id)_errorDescription:(id)arg1 ;
-(unsigned long long)fileIOCount;
-(unsigned long long)fileIOErrorCount;
-(NSMutableDictionary *)fileIOErrorCountByCode;
-(id)initWithFileIOType:(unsigned long long)arg1 fileIOCount:(unsigned long long)arg2 fileIOErrorCount:(unsigned long long)arg3 ;
-(void)logFileIOWithError:(id)arg1 ;
-(id)topErrorCodesWithLimit:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(unsigned long long)type;
@end
