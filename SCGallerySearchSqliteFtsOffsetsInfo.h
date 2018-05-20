/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCGallerySearchSqliteFtsOffsetsInfo : NSObject {

	long long _columnIndex;
	long long _matchedQueryTermIndex;
	long long _byteOffsetInColumn;
	long long _matchedSizeInBytes;

}

@property (nonatomic,readonly) long long columnIndex;                        //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,readonly) long long matchedQueryTermIndex;              //@synthesize matchedQueryTermIndex=_matchedQueryTermIndex - In the implementation block
@property (nonatomic,readonly) long long byteOffsetInColumn;                 //@synthesize byteOffsetInColumn=_byteOffsetInColumn - In the implementation block
@property (nonatomic,readonly) long long matchedSizeInBytes;                 //@synthesize matchedSizeInBytes=_matchedSizeInBytes - In the implementation block
+(id)offsetsInfosWithOffsetsString:(id)arg1 ;
+(id)_splitArray:(id)arg1 intoArraysOfSize:(long long)arg2 ;
-(long long)byteOffsetInColumn;
-(long long)matchedSizeInBytes;
-(id)initPrivateWithColumnIndex:(long long)arg1 matchedQueryTermIndex:(long long)arg2 byteOffsetInColumn:(long long)arg3 matchedSizeInBytes:(long long)arg4 ;
-(long long)matchedQueryTermIndex;
-(long long)columnIndex;
@end

